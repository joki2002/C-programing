#include<stdio.h>
 
int main()
{
	int num1 = 0;
	int num2 = 0;
	int value = 0;
	char a = 0;
 
	printf( "������ �Է��Ͻÿ� : " );
	scanf( "%d %c %d", &num1, &a, &num2 );
 
	switch(a){  
	case '+': 
		value = num1 + num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '-': 
		value = num1 - num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '*':  
		value = num1 * num2;
		printf( "%d %c %d = %d", num1, a, num2, value );
		break;
	case '/':  
		printf( "%d/%d = %lf", num1, num2, (double)num1/num2 );
		break;
	default:
		printf( "����� �� ����" );
		break;
	}
 
	return 0;
}
