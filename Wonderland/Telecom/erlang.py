from math import factorial

def erlang_b(B, A):
    numerator = (A ** B) / factorial(B)
    denominator = sum([(A ** k) / factorial(k) for k in range(B + 1)])
    return numerator / denominator

def find_number_of_links(target_blocking_probability, offered_traffic):
    B = 0  # start with zero links
    while True:
        blocking_probability = erlang_b(B, offered_traffic)
        print(B, blocking_probability)
        if blocking_probability <= target_blocking_probability:
            break
        B += 1
    return B

# Example usage:
target_blocking_probability = 0.01
offered_traffic = 50

number_of_links = find_number_of_links(target_blocking_probability, offered_traffic)
print(f"Number of links required: {number_of_links}")
