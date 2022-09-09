#include <stdio.h>

int main()
{
    char input[1000];
    int count = 0;
    
    gets(input);
    while (input[count]) {
        if (input[count] >= 65 && input[count] <= 90) // 대문자
            input[count] += 32; //소문자 치환
        else if (input[count] >= 97 && input[count] <= 122) // 소문자
            input[count] -= 32; //대문자 치환

        count++;
    }

    printf("%s", input);
}