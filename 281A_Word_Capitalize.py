string = input()
s = string[0]
s = s.upper()
for i in range(1,len(string)) : 
    s += string[i]
print(s)