n1 = int(input())
n2 = int(input())
n3 = int(input())
list1 = [0]*6
list1[0] = n1*n2*n3
list1[1] = n1*(n2+n3)
list1[2] = (n1+n2)*n3
list1[3] =  n1*n2+n3
list1[4] =  n1+n2*n3
list1[5] = n1 + n2 + n3
print(max(list1))