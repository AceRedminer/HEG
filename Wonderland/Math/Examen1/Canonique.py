def canon(x0, y0, x1, y1):
    a = (y1 - y0) / (x1 - x0)
    b = y0 - (a * x0)
    return [a, b]

ab = canon(5, 3, -1, 9)
print("y = ", ab[0], "x + ", ab[1])