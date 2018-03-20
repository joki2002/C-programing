#include <stdio.h>

int main () 
{
	int a;
	printf("3^0 = ");
	scanf("%d", &a);
	
	if (a == 1)
	{
		printf ("정답 입니다.");
	}
	else if (a == 2, a == 0)
	{
		printf("정답과 근소한 차였네요.");
	}
	else
	{
		printf("정답과 매우 먼 결과였어요");
	}
	return 0; 
}
