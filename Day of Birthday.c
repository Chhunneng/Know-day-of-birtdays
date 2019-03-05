#include<stdio.h>
struct month{
	int date[12];
	char day[7];
}mon;
main()
{
	int year,i;
	printf("Enter year: ");
	scanf("%d",&year);
	mon.date[0]=31;
	mon.date[1]=28;
	mon.date[2]=31;
	mon.date[3]=30;
	mon.date[4]=31;
	mon.date[5]=30;
	mon.date[6]=31;
	mon.date[7]=31;
	mon.date[8]=30;
	mon.date[9]=31;
	mon.date[10]=30;
	mon.date[11]=31;
	if(year%100==0 && year%400==0)
	mon.date[1]=29;
	else if(year%100==0 && year%400!=0)
	mon.date[1]=mon.date[1];
	else
	{
	if(year%4==0)
	{
	mon.date[1]=29;
	}
	}
	
	
	
	for(i=0;i<12;i++)
	{
		printf("This year Month %d have %d days\n",i+1,mon.date[i]);
	}
	
	
//	strcpy(mon.day[0],"Sunday");
//	strcpy(mon.day[1],"Monday");
//	strcpy(mon.day[2],"Tuesday");
//	strcpy(mon.day[3],"Wednesday");
//	strcpy(mon.day[4],"Thursday");
//	strcpy(mon.day[5],"Friday");
//	strcpy(mon.day[6],"Saturday");
//	
//	for(i=0;i<7;i++)
//	{
//		printf("Day %d is %c\n",i+1,mon.day[i]);
//	}
//	
}
