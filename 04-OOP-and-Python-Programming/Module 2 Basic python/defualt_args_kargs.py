def sum(num1, num2, num3=0, num4=0):
    result = num1 + num2 + num3
    return result

total = sum(10, 20 )
print("The sum is:", total)

#args

def all_sum(num1,num2,*numbers):
    print(numbers)
    sum = 0
    for num in numbers:
        print(num)
        sum = sum + num
    return sum

total = all_sum(10,20,30,50,60,70)
print(total)


