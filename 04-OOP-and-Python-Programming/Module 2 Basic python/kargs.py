def full_name(first, last):
   
    name = (first + " " + last)
    return name

#name = full_name("Jihad", "akash")

name = full_name(last = "Jihad", first = "akash")
print(name)

def famous_name(first, last, **middle):
    name = (first + " " + last )
    for key, value in middle.items():
        print(key, value)
    return name

name = famous_name(first = "Jihad", last ="akash", add="fahim", add2="jeba", add3 = "srabon")
print(name)

def multi_return(num1, num2):
    sum = num1 + num2
    sub = num1 - num2
    mul = num1 * num2
    return sum, sub, mul

all = multi_return(50, 10)
print(all)
