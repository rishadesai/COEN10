#include <stdio.h>
#define SIZE 6
int main ()
{
	int answer;
	int slot;
	int appts=0;
	int i;
	int schedule [SIZE] = {0, 0, 0, 0, 0, 0};

	while (1) {
		printf("\n type 1 to schedule an appt, type 2 to cancel an appt, type 3 to show schedule, or type 9 to quit.\n");
		scanf("%d", &answer);
			if (answer==1)
				{
				if (appts==6)
					printf("All appts are full.");
				else
					for (i=0; i<SIZE; i++)
						{
						if (schedule[i]==0)
							{
							printf("Your appt is at %d pm", i+1);
							appts++;
							schedule[i] = i+1;
							break;
							}
						}
				}
			else if (answer==2)
				{
				if (appts==0)
					printf("There is nothing to cancel.");
				else
					{ 
					printf("enter the slot you want to cancel. \n");
					scanf("%d", &slot);
						if (schedule[slot-1]==0)
							printf("time slot not reserved, can't be cancelled.");
						else 
							schedule[slot-1]=0;
							appts--;
					}
				}
				else if (answer==3)
					{
					for (i=0; i<SIZE; i++)
						{
						if (schedule[i]>0)
							printf("%d pm - booked\n", i+1);
						else
							printf("%d pm - available\n", i+1);
						}
					}
				else if (answer==9)
					return (0);
				else
					printf("bad option.");
}
}
