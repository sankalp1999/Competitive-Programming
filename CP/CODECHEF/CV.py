n = int(input())
for i in range(n):
    count = 0
    length = int(input())
    s = input()
    if n == 0 or n == 1:
        count = 0
        print(count)
    elif (n > 1):
        for i in range(len(s) - 1):
            if s[i] != 'a':
                if s[i] != 'e':
                    if s[i] != 'i':
                        if s[i] != 'o':
                            if s[i] != 'u':

                                if s[i + 1] == 'a' or s[i + 1] == 'e' or s[i + 1] == 'i' or s[i + 1] == 'o' or s[
                                    i + 1] == 'u':
                                    count += 1

    print(count)
