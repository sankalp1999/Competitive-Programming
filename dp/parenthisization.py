#python3
def MinAndMax(i, j, operators, digits):
    min1 = 1000000000000000
    max1 = -1000000000000000
    for k in range(i, j):
        op = operators[k-1]
        if(op == '+'):
            a = M[i][k] + M[k+1][j]
            b = M[i][k] + m[k+1][j]
            c = m[i][k] + M[k+1][j]
            d = m[i][k] + m[k+1][j]
        elif(op == '*'):
            a = M[i][k] * M[k+1][j]
            b = M[i][k] * m[k+1][j]
            c = m[i][k] * M[k+1][j]
            d = m[i][k] * m[k+1][j]
        elif(op == '-'):
            a = M[i][k] - M[k+1][j]
            b = M[i][k] - m[k+1][j]
            c = m[i][k] - M[k+1][j]
            d = m[i][k] - m[k+1][j]
        min1 = min(min1, a, b, c, d)
        max1 = max(max1, a, b, c, d)
    return min1, max1
s = input()
operators = []
digits = []
for i in range(len(s)):
    if(i%2 == 0):
        digits.append(int(s[i]))
    else:
        operators.append(s[i])
    

n = len(digits)
#print(operators)
M = [[0 for i in range(n+1)] for j in range(n+1)]
m = [[0 for i in range(n+1)] for j in range(n+1)]
#print(len(M))
for i in range(1, n+1):
    m[i][i] = digits[i-1]
    M[i][i] = digits[i-1]
for s in range(1, n+1):
    for i in range(1, n-s+1):
        j = i + s 
        m[i][j], M[i][j] = MinAndMax(i, j, operators, digits)
print(M[1][n])


