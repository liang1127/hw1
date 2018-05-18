#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int theSeason;
	
	printf("請輸入月份(1~12)\n");
	scanf("%d",&theSeason);
	
	if(theSeason>=3&theSeason<=5)
	{
		printf("春天來瞭!");
	}
	else if(theSeason>=6&theSeason<=8)
	{
		printf("男人的季節!");
	}
	else if(theSeason>=9&theSeason<=11)
	{
		printf("秋天");
	}
	else if (theSeason==12|theSeason==1|theSeason==2)
	{
		printf("冬天");
		
	}
	else if (theSeason>=13)
	{
		printf("輸入錯誤");
	}
	return 0;
}
