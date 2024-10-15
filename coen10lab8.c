#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 6
void schedule1 (void);
void cancelbyname (void);
void cancelbytime (void);
void list (void);
void firstletter(void);
int answer;
int slot;
int appts=0;
int i, j;
int canceltime;
char name [20];
char schedule [6][20];
char letter;
char phones [6][20];
char phonenum [10];


int main ()
{
	for (i=0; i<6;i++)
	schedule [i][0]= '\0';
	while (1) {
		printf("\n type 1 to schedule an appt, type 2 to cancel by name, type 3 to cancel by time, type 4 to list, type 5 to show names by letter,  or type 9 to quit.\n");
		scanf("%d", &answer);
		switch (answer)
		{

		case 1:
			schedule1();
			break;
		case 2:
			cancelbyname();
			break;
		case 3:
			cancelbytime();
			break;
		case 4:
			list();
			break;
		case 5:
			firstletter();
			break;
		case 9:
			return 1;
		default:
			printf("bad option\n");
		}
			
	}
}
void schedule1 (void)
{
                                {
                                if (appts == 6)
                                        printf("All appts are full.");
                                else

                                                        {
                                                        printf("Enter your name.");
                                                        scanf("%s", &name);
							for (i=0; i<SIZE; i++)
								if (strcmp (schedule[i], name)==0)
									{
									printf("Appt already scheduled for this name.");
									return;
									}
							printf("Enter your phone number");
							scanf("%s", &phonenum);
                                       
                                                              
                                           
                                                                        
                                                        strcpy(schedule[appts], name);
							strcpy(phones[appts], phonenum);
							appts++;
							printf("Appt scheduled for %s and for number %s for %d pm \n", name, phonenum, appts);
                                                 
                                                                        
								
                                                                }
                                                        }
                                
}

void cancelbyname (void)
{
                                {
                                if (appts==0)
                                        printf("There is nothing to cancel.");
                                else
                                        {
                                        printf("enter your name to cancel appt \n");
                                        scanf("%s", &name);
                                        for (i=0; i < SIZE; i++)
                                                {
                                                        if (strcmp(schedule[i], name) == 0)
                                                               {
			
                                                                for (j=i+1; j<appts; j++)
                                                                        {
                              
                                                                              
                                                                                strcpy(schedule[j-1], schedule[j]);
                                                       
										strcpy(phones[j-1], phones[j]);
								
                                                                           
										printf("the appt for %s for number %s  at %dpm is moved to %dpm \n",schedule[j], phones[j], j+1, j);
                                                                                
                                                                        }
								appts --;
								schedule[appts][0]='\0';
								break;
								}
                                                }
					if (i==SIZE)
						printf("There is nothing to cancel.");
                                        }
                                }
}
void cancelbytime (void)
{
			
				if (appts==0)
                                        printf("There is nothing to cancel.");
				else 
					{
					printf("enter the number of the time you want to cancel");
					scanf("%d", &canceltime);
	
                                                if (schedule[canceltime-1][0]=='\0')
                                                {
                                                        printf("no appt scheduled");
                                                }
                                                 else
							{
                                                                for (j=canceltime; j<appts; j++)
                                                                        {
                                                                   
                                                     
                                                                                strcpy(schedule[j-1], schedule[j]);
                                                                                strcpy(phones[j-1], phones[j]);
										printf("the appt for %s for number %s  at %dpm is moved to %dpm \n",schedule[j], phones[j], j+1, j);
                                                                             
                                                                                
                                                
										}
									}
								appts--;
								phones[appts][0]='\0';
								schedule[appts][0]='\0';
                                               		 }
                                     	
                              
}

void list (void)
{
		{
			if (appts==0)
				printf("No appts.");
			else
                            {           for (i=0; i<SIZE; i++)
                                      	{
                                       if (schedule[i][0] == '\0')
                                                {
                                                        printf("%d pm is available \n", i+1);
                                                }
                                               else
                                                {
                                                        printf("%d pm is booked by %s whose phone number is %s \n", i+1, schedule[i], phones [i]);
                                                }
                                        }
			}
               }
}

void firstletter (void)
{
		     
                                if (appts==0)
                                        printf("No appts booked.");
                                else
                                        {
                                        printf("Enter the first letter of your name.");
                                        scanf(" %c", &letter);
					letter = tolower(letter);
                                        for (i=0; i<SIZE; i++)
                                                {
                                                if (letter == tolower( schedule[i][0]))
                                                {
                                                printf("%s at %d pm for phone number %s \n", schedule[i], i+1, phones[i]);
                                         	}
                                                }
                                        }
                      
}
					
