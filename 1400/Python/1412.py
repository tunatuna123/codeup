ans_arr = [0 for x in range(26)]
replaced_word = "".join(list(filter(str.isalpha,input())))

for i in range(len(replaced_word)):
    ans_arr[ord(replaced_word[i])-97] += 1

for i in range(len(ans_arr)):
    print("{0}:{1}".format(chr(i+97), ans_arr[i]))