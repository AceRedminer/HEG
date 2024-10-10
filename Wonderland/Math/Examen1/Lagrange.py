from sympy import symbols, expand, nsimplify

def lagrange_interpolation_polynomial(x, x_values, y_values):
    if len(x_values) != len(y_values) or len(x_values) == 0:
        raise ValueError("Input data size mismatch")

    n = len(x_values)
    result = 0
    X = symbols('x')

    for i in range(n):
        term = y_values[i]
        for j in range(n):
            if i != j:
                term *= (X - x_values[j]) / (x_values[i] - x_values[j])
        result += term

    simplified_result = expand(result, steps=True)
    
    # Convert coefficients to floats
    simplified_result_float = nsimplify(simplified_result).evalf()

    return simplified_result_float

# Example usage
x_values = [0, 1, 2, 3]
y_values = [1, 2, 3, 4]

x = symbols('x')
interpolation_polynomial = lagrange_interpolation_polynomial(x, x_values, y_values)

for step in interpolation_polynomial.args:
    print("Step:")
    print(step)
    print("-" * 40)

print("Final Simplified Lagrange Interpolating Polynomial (Float Coefficients):")
print(interpolation_polynomial)
