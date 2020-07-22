s = input()
if s == 'R':
    factor = -1
elif s == 'L':
    factor = 1
top = "qwertyuiop"
mid = "asdfghjkl;"
bot = "zxcvbnm,./"
main = input()

for i in range(len(main)):
    for j in range(len(top)):
        id_x = j + factor
        if (j + factor == len(top) and s == 'R'):
            id_x = j + factor - 1
        elif (j + factor == len(top) and s == 'L'):
            id_x = j + factor + 1
        if (main[i] == top[j]):
            print(top[id_x], end='')
        elif ((main[i] == mid[j])):
            print(mid[id_x], end='')
        elif ((main[i] == bot[j])):
            print(bot[id_x], end='')