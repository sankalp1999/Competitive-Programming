# also known as top-down dp
dict1 = dict()
def fib(n):
    
    if n == 1 or n == 0:
        return 1
    elif n in dict1:
        return dict1[n]
    else:
        sum1 = fib(n-1) + fib(n-2)
        
        if sum1 not in dict1:
            dict1[n] = sum1
        return sum1
#26863810024485359386146727202142923967616609318986952340123175997617981700247881689338369654483356564191827856161443356312976673642210350324634850410377680367334151172899169723197082763985615764450078474174626
n = int(input())
a = 0
b = 1
c = 1
for i in range(n-1):
    c = a + b
    a = b
    b = c 
    print(c)
print(c)