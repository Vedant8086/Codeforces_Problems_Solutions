lens = int(input());
for i in range(0,lens) :
    new_string = input()
    if len(new_string) < 11 : 
        print(new_string)
    else :
        new_string1 = new_string[0]
        new_string1 += str((len(new_string)-2))
        new_string1 += new_string[len(new_string)-1]
        print(new_string1)
