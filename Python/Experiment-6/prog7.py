#(a) Keyword Argument
# In keyword arguments, the caller identifies the arguments by the parameter name. This allows you to pass arguments in any order, order of arguments does not matter.
def student(name, age):
    print("Name:", name)
    print("Age:", age)

student(age=22, name="Lavish") # ------------------Order of arguments does not matter--------------------


#(b) Default Argument
# default arguments means that if the caller does not provide a value for that parameter, the default value will be used.

def greet(name = "World"):
    print("Hello",name)

greet()
greet("Alice")  # ------------------Overriding default value--------------------


#(c) Variable-length Argument
def sum_numbers(*args): 
    total = 0           
    for num in args:
        total += num
    return total

print("Sum:", sum_numbers(1, 2, 3))

def print_info(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_info(name="Alice", age=30, city="New York")

# (d) required argument
# Required arguments are those that must be provided by the caller when calling a function. If a required argument is missing, Python will raise a TypeError.

def print_values(a, b=10):
    print("a:", a, end = " ")
    print("b:", b) 

print_values(5)  # ------------------Required arguments--------------------
print_values(5, 20)  # ------------------Overriding default value--------------------