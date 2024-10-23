#include <stdio.h>
 
int main()
{
    int a, b; // 입력받을 정수2개와 연산자 문자 1개를 선언
    char ch;
 
    printf("첫번째 수를 입력하세요 : ");
    scanf("%d", &a);
    printf("계산할 연산자를 입력하세요 : ");
    scanf(" %c", &ch);
    printf("두번째 수를 입력하세요 : ");
    scanf("%d", &b);
 
    if (ch == '+') // 중복 if문을 사용한 연산을 수행 
        printf("%d + %d = %d 입니다. \n", a, b, a + b);
 
    if (ch == '-')
        printf("%d - %d = %d 입니다. \n", a, b, a - b);
 
    if (ch == '*')
        printf("%d * %d = %d 입니다. \n", a, b, a*b);
 
    if (ch == '/')
        printf("%d / %d = %f 입니다. \n", a, b, a / (float)b);
 
    if (ch == '%')
        printf("%d %% %d = %d 입니다. \n", a, b, a%b);