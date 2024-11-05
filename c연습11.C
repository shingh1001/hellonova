#include <stdio.h>
#include <string.h>
 
int main()
{
    char ss[100]; // 입력받을 문자 배열을 선언
    int count, i;
    char *p; // 문자형 포인터를 선언
 
    printf("문자열을 입력하세요 : ");
    scanf("%s", ss);
 
    count = strlen(ss); // 입력한 문자열의 갯수
 
    p = ss; // 배열 ss의 주소를 포인터 변수 p에 대입
 
    printf("내용을 거꾸로 출력 ==> ");
    for (i = 0; i<count; i++) // 포인터 p에 있는 실제 값을 문자열의 맨 뒤부터 출력
    {
        printf("%c", *(p + count - (i + 1)));
    }
    printf("\n");
}