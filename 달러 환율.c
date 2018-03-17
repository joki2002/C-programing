#include <stdio.h>

int main ()
{
	int a = 1069;
	int b = 0;
	
	printf ("달러를 입력해 주세요 : ");
	scanf ("%d", &b);
	printf ("%d원", a*b);
	
	return 0;
}
