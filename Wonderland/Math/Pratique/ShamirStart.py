import random
from sympy import Symbol, solve

def generate_random_coeffs(secret, threshold, prime):
    coeffs = [secret]  # The first coefficient is the secret itself

    for _ in range(1, threshold):
        while True:
            rand_coeff = random.randint(1, prime - 1)
            if rand_coeff not in coeffs:
                coeffs.append(rand_coeff)
                break

    return coeffs

def evaluate_polynomial(coeffs, x, prime):
    result = 0
    power = 0

    for coeff in coeffs:
        result = (result + (coeff * (x ** power))) % prime
        power += 1

    return result

def generate_shares(secret, threshold, num_shares, prime):
    coeffs = generate_random_coeffs(secret, threshold, prime)
    shares = []

    for x in range(1, num_shares + 1):
        share = (x, evaluate_polynomial(coeffs, x, prime))
        shares.append(share)

    return shares

def interpolate_secret(shares, prime):
    secret = 0
    x = Symbol('x')

    for xi, yi in shares:
        term = 1

        for xj, _ in shares:
            if xi != xj:
                term *= (x - xj) / (xi - xj)

        secret = (secret + yi * term) % prime

    return secret

if __name__ == "__main__":
    prime = 257  # A prime number (should be large)
    secret = 12345  # The secret to be shared

    threshold = 3  # Number of shares required to reconstruct the secret
    num_shares = 5  # Total number of shares to generate

    shares = generate_shares(secret, threshold, num_shares, prime)
    print("Generated shares:")
    for x, y in shares:
        print(f"Share {x}: {y}")

    # Simulate collecting a subset of shares (e.g., 3 out of 5)
    collected_shares = shares[:3]

    reconstructed_secret = interpolate_secret(collected_shares, prime)
    print("\nReconstructed secret:", reconstructed_secret)
