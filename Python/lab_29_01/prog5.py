num = int(input("Enter a number: "))
rev = 0
temp = num

while temp>0:
    rev = rev * 10 + temp % 10
    temp //= 10
print("Reversed Number:", rev)

if num == rev:
    print(num, "is a Palindrome")
else:       
    print(num, "is not a Palindrome")
