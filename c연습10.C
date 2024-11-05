#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100]; // 문자열 배열 str을 선언한다.
    char ch1, ch2; // 기존 문자와 새 문자를 위한 문자형 변수
    int i;
 
    printf("여러 글자를 입력 : ");
    gets(str);
 
    printf("기존 문자와 새로운 문자 : ");
    scanf("%c %c", &ch1, &ch2);
 
    for (i = 0; i<strlen(str); i++)
    {
        if (str[i] == ch1)
            str[i] = ch2;
    }
 
    printf("변환된 결과 ==> %s \n", str);
}