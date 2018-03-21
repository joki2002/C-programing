#include <stdio.h>

int main () 
{
	int i,j;
	for (i = 0; i<10; i ++)
	{
		for (j = 0; j<10; j ++)
		{
			printf(" %d - %d 번재 반복 되었습니다. \n", i+1, j+1);
		}
	}
	return 0;
}
