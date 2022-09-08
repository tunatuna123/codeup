# include <stdio.h>

int main()
{
	int hour,minute;
	
	scanf("%d %d",&hour,&minute);
	
	hour += 24;
	minute = minute + hour * 60; 
    minute -= 30;  
	hour = minute / 60;  
	hour = hour % 24;
	minute = minute % 60;  
	
	printf("%d %d",hour, minute);
	
	return 0;
}