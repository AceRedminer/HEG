def find_intersection(a1, b1, c1, d1, a2, b2, c2, d2):
    # Solve for x and y using the equations ax + by = c
    # a1x + b1y = c1
    # a2x + b2y = c2

    # Calculate the determinant
    determinant = a1 * b2 - a2 * b1

    if determinant == 0:
        # The lines are parallel and do not intersect
        return None
    else:
        # Calculate the intersection point
        x = (c1 * b2 - c2 * b1) / determinant
        y = (a1 * c2 - a2 * c1) / determinant
        return x, y


def verify_constraints(intersection, coefficients):
    x, y = intersection
    for a, b, c, d in coefficients:
        if d == 0:
            if a * x + b * y != c:
                return False  # If any constraint is not satisfied, return False
        elif d == 1:
            if a * x + b * y >= c:
                return False
        elif d == 2:
            if a * x + b * y <= c:
                return False
        elif d == 3:
            if a * x + b * y > c:
                return False
        elif d == 4:
            if a * x + b * y < c:
                return False
    return True  # If all constraints are satisfied, return True


def find_all_feasible_solutions(coefficients):
    feasible_solutions = []
    n = len(coefficients)

    for i in range(n):
        for j in range(i + 1, n):
            intersection = find_intersection(*coefficients[i], *coefficients[j])
            if intersection is not None and verify_constraints(
                intersection, coefficients
            ):
                feasible_solutions.append(intersection)

    return feasible_solutions


def find_optimal_solution(feasible_solutions, objective_function):
    optimal_x = None
    optimal_y = None
    optimal_value = float("-inf")  # Initialize with negative infinity

    for x, y in feasible_solutions:
        objective_value = objective_function(x, y)
        if objective_value > optimal_value:
            optimal_x = x
            optimal_y = y
            optimal_value = objective_value

    return optimal_x, optimal_y, optimal_value

def find_minimal_solution(feasible_solutions, objective_function):
    minimal_x = None
    minimal_y = None
    minimal_value = float("inf")  # Initialize with positive infinity

    for x, y in feasible_solutions:
        objective_value = objective_function(x, y)
        if objective_value < minimal_value:
            minimal_x = x
            minimal_y = y
            minimal_value = objective_value

    return minimal_x, minimal_y, minimal_value

if __name__ == "__main__":
    # 0 -> =; 1 -> <; 2 -> >; 3 -> <=; 4 -> >=
    coefficients = [
        (1, 0, 0, 4),  
        (0, 1, 1, 4),  
        (4, 2, 8, 4),  
        (3, -2, 0, 4),
        (1, -2, 30, 3),
        (1, -1, 15, 3),
    ]

    pt = [6.5, 9.25]
    is_in = verify_constraints(pt, coefficients)
    print(f"The point x = {pt[0]}, y = {pt[1]} is {'in' if is_in else 'out'} the constraints.")


    def custom_objective_function(x, y):
        # Replace this function with your specific objective function
        return 7 * x + 2 * y + 20

    feasible_solutions = find_all_feasible_solutions(coefficients)
    optimal_x, optimal_y, optimal_value = find_optimal_solution(
        feasible_solutions, custom_objective_function
    )

    if feasible_solutions:
        print("Feasible solutions that respect constraints:")
        for i, solution in enumerate(feasible_solutions):
            x, y = solution
            print(f"Solution {i + 1}: x = {x}, y = {y}")

        print(f"Optimal solution: x = {optimal_x}, y = {optimal_y}")
        print(f"Optimal value: {optimal_value}")
    else:
        print("No feasible solutions found.")

    minimal_x, minimal_y, minimal_value = find_minimal_solution(
        feasible_solutions, custom_objective_function
    )

    if feasible_solutions:
        print("\nMinimal solution: x = {}, y = {}".format(minimal_x, minimal_y))
        print("Minimal value: {}".format(minimal_value))
    else:
        print("No feasible solutions found.")
