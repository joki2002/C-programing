#include <stdio.h>

int main ()
{
	int a, result, result1, result2;
	
	printf ("�ʸ� �Է��� �ּ��� : ");
	scanf ("%d", &a);
	
	a>3600 ? result = a/3600, result1 = (a%3600)/60, result2=(a%3600)%60, printf ("%d�� %d�� %d�� �Դϴ�.", result, result1, result2) : a>60 ? result = a/60, result1 = a%60, printf ("%d�� %d�� �Դϴ�.", result, result1) : printf ("%d�� �Դϴ�.", a);
	
	return 0;                    
}
