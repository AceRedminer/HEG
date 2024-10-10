def poly_add(poly_1, poly_2):
    max_len = max(len(poly_1), len(poly_2))
    poly_1 += [0] * (max_len - len(poly_1))
    poly_2 += [0] * (max_len - len(poly_2))
    poly_3 = [0] * max_len
    for x in range(max_len):
        poly_3[x] = poly_1[x] + poly_2[x]
    return poly_3

def poly_sub(poly_1, poly_2):
    max_len = max(len(poly_1), len(poly_2))
    poly_1 += [0] * (max_len - len(poly_1))
    poly_2 += [0] * (max_len - len(poly_2))
    poly_3 = [0] * max_len
    for x in range(max_len):
        poly_3[x] = poly_1[x] - poly_2[x]
    return poly_3

def poly_mul(poly_1, poly_2):
    max_len = len(poly_1) + len(poly_2) - 1
    poly_3 = [0] * max_len

    for i in range(len(poly_1)):
        for j in range(len(poly_2)):
            poly_3[i + j] += poly_1[i] * poly_2[j]

    return poly_3

def poly_div(poly_1, poly_2):
    max_len = max(len(poly_1), len(poly_2))
    poly_1 += [1] * (max_len - len(poly_1))
    poly_2 += [1] * (max_len - len(poly_2))
    poly_3 = [0] * max_len
    for x in range(max_len):
        poly_3[x] = poly_1[x] / poly_2[x]
    return poly_3


# [0] = x^0; [n] = x^n-1 

poly_res_add = poly_add([1, 2, 3], [2, 4, 6, 8])
poly_res_sub = poly_sub([1, 2, 3], [1, 4, 6, 8])
poly_res_mul = poly_mul([1, 2, 3], [2, 4, 6, 8])
poly_res_div = poly_div([1, 2, 3], [2, 4, 6, 8])

max_degree = max(len(poly_res_add), len(poly_res_sub), len(poly_res_mul), len(poly_res_div))

def print_polynomial(coefficients, identifier):
    max_degree = len(coefficients) - 1
    result = f"{identifier}: "
    for x in range(max_degree, -1, -1):
        if coefficients[x] != 0:
            if x == 0:
                result += f"{coefficients[x]}"
            elif x == 1:
                result += f"{coefficients[x]}*x"
            else:
                result += f"{coefficients[x]}*x^{x}"
            if x > 0:
                result += " + "
    print(result)

print_polynomial(poly_res_add, "Add")
print_polynomial(poly_res_sub, "Sub")
print_polynomial(poly_res_mul, "Mul")
print_polynomial(poly_res_div, "Div")









