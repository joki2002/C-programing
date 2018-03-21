#include <stdio.h>

int main ()
{
	int a, result, result1, result2;
	
	printf ("초를 입력해 주세요 : ");
	scanf ("%d", &a);
	
	a>3600 ? result = a/3600, result1 = (a%3600)/60, result2=(a%3600)%60, printf ("%d시 %d분 %d초 입니다.", result, result1, result2) : a>60 ? result = a/60, result1 = a%60, printf ("%d분 %d초 입니다.", result, result1) : printf ("%d초 입니다.", a);
	
	return 0;                    
}
