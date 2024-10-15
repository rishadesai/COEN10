#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
	int counter = 0;
	int i;
	int rand1;
	int rand2;
	int result;
	srand ((int)time(NULL));
	for (i = 0; i < 10; i++)
	{
		rand1 = rand()%13;
	        rand2 = rand()%13;
		printf("%d * %d \n", rand1, rand2);
		int theirproduct;
		scanf("%d", &theirproduct);
		result = rand1*rand2;
	if (theirproduct == result)
	{
		printf("Yay!\n");
		counter++;
	}
	else
	{
		printf("Wrong. The correct answer is %d. \n", result);
	}
	}
	printf ("The percent you got right is %d %%. \n", counter*10);
}
