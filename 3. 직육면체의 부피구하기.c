#include <stdio.h>

int main ()
{
	int a, b, c;
	printf("직육면체의 가로 길이를 입력하세요 : ");
	scanf("%d", &a);
	printf("\n");
	
	printf("직육면체의 세로 길이를 입력하세요 : ");
	scanf("%d", &b);
	printf("\n");
	
	printf("직육면체의 높이 길이를 입력하세요 : ");
	scanf("%d", &c);
	printf("\n");
	
	printf("직육면체의 부피는 %d입니다. \n", a*b*c); 
	
	return 0;
}
