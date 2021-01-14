#include<stdio.h>
#include<windows.h>
#include<unistd.h>

int main()
{
	int h,m,s;
	int d = 1000;
	printf("\nA clock to remind you for your new year resolution :)");
	printf("\n\n\nSet Current Time: ");
	printf("\n\n\nEnter HH: ");
	scanf("%d", &h);
	printf("\nEnter MM: ");
	scanf("%d",&m);
	printf("\nEnter SS: ");
	scanf("%d",&s);
	if (h > 12 || m > 60 || s > 60)
	{
		printf("\nError!");
		exit(0);
	}
	while(1)
	{
		s++;
		if(s > 59)
		{
			m++;
			s = 0;
		}
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if(h > 12)
		{
			h = 1;
		}
		printf("\nA clock to remind you for your new year resolution :)");
		printf("\nClock: ");
		printf("\n\n\n\t\t\t%02d:%02d:%02d", h,m,s);
		sleep(1);
		system("cls");
	}
	return 0;
}