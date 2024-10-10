import numpy as np
import matplotlib.pyplot as plt
from scipy.signal import square, butter, cheby1, lfilter, sosfilt, freqs
from scipy.fftpack import fft, ifft

# Parameters for the square wave signal
duration = 1.0  # in seconds, i.e., 1 s
sampling_rate = 1000  # in Hz; i.e., 1 kHz
frequency = 5  # Frequency in Hz; i.e., 5 Hz

# Time array 0, 0.001, 0.002, ...
t = np.linspace(0, duration, int(sampling_rate * duration), endpoint=False)

# Create a square wave signal using scipy.square
square_wave_signal = square(2 * np.pi * frequency * t)

# Plot the original square wave signal
plt.figure(figsize=(12, 6))
plt.subplot(2, 2, 1)
plt.plot(t, square_wave_signal, label='Original Square Wave Signal')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.grid(True)

# To compute the Fourier transform use the FFT algorithm
fft_result = fft(square_wave_signal)
# Create a frequency axis
freq_axis = np.fft.fftfreq(len(fft_result), 1/sampling_rate)

# Plot the signal spectrum in the frequency domain
plt.subplot(2, 2, 2)
plt.plot(freq_axis, np.abs(fft_result), label='Frequency Domain')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
plt.grid(True)

# Apply a low-pass filter at 25 Hz
sos = butter(4, 50/sampling_rate, btype='low', analog=False, output='sos')
filtered = sosfilt(sos, square_wave_signal)
fft_filtered = fft(filtered)

# Plot the filtered signal in time domain
plt.subplot(2, 2, 3)
plt.plot(t, filtered, label='Filtered Square Wave Signal')
plt.title('Filtered Signal')
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.legend()
plt.grid(True)

# Plot the filtered spectrum in the frequency domain
plt.subplot(2, 2, 4)
plt.plot(freq_axis, np.abs(fft_filtered), label='Filtered Frequency Domain')
plt.title('Filtered Frequency Domain')
plt.xlabel('Frequency (Hz)')
plt.ylabel('Magnitude')
plt.legend()
plt.grid(True)

plt.tight_layout()
plt.show()
