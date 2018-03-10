#include <stdio.h>

int main ()
{
    int a, b;
    
    printf("16진수로 바꿀 하나의 정수를 입력해 주세요.");
    scanf("%d", &a);
    printf("16진수 : %x \n\n", a);
    
	printf("8진수로 바꿀 하나의 정수를 입력해 주세요.");
    scanf("%d", &b);
    printf("8진수 : %o \n\n", b);
    
	printf("감사합니다.");
    return 0; 
}
