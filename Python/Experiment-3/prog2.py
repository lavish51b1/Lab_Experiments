num = int(input("enter a number: "))
flag  = num
total = 0

while flag > 0:
    digit = flag % 10
    total += digit ** 3
    flag //= 10

if total == num:
    print("Number is armstrong")
else:
    print("number is not armstrong")


