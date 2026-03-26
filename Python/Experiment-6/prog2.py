def cube_sum(n):
    total =0

    for i in range(n):
        total += i*i*i    # i**3

    return total

print("Sum of cubes is :", cube_sum(5))    
