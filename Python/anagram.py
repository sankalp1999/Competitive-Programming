n = int(input())

list1 = list()

while(n!=0):

    s = input()
    list1.append(set(s))
    n = n - 1 
print(list1)