#include <stdio.h>

#define year 2010
#define age 20

int main () 
{
	
	printf("올해는 %d년 입니다.\n", year);
	printf("내 나이는 %d살 입니다.\n", age);
	printf("나는 %d년에 태어나 %d번째 해가 되었습니다.\n", year-20, age);
	printf("내 동생의 나이는 %d입니다.\n", age-2);
	printf("내 동생은 %d년에 태어나 %d번째 해가 되었습니다.\n", year-18, age-2);
	
	return 0;
}
