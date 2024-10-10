from sympy import symbols, Eq, solve

def interpolate_secret(subset_shares, prime):
    x, y = symbols('x y')
    secret = 0

    for xi, yi in subset_shares:
        term = 1
        for xj, _ in subset_shares:
            if xi != xj:
                term *= (x - xj) / (xi - xj)

        secret += yi * term

    # Solve for the secret using any equation
    equation = Eq(secret, y)
    solutions = solve(equation.subs({x: 0}), y)

    for solution in solutions:
        if 0 <= solution < prime:
            return solution

    return None  # Secret not found

if __name__ == "__main__":
    prime = 257  # A prime number (should be large)
    # The secret is unknown
    threshold = 2  # Number of shares required to reconstruct the secret

    shares = [
        (1, 400),  # Share 1
        (3, 500),  # Share 2
        (4, 550)    # Share 3
    ]

    # Simulate collecting a subset of shares (e.g., 3 out of 3)
    subset_shares = shares

    if len(subset_shares) >= threshold:
        reconstructed_secret = interpolate_secret(subset_shares, prime)
        if reconstructed_secret is not None:
            print("Reconstructed secret:", reconstructed_secret)
        else:
            print("Secret not found. Incorrect input or insufficient shares.")
    else:
        print("Insufficient shares to reconstruct the secret.")
