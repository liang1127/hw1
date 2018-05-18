#include <iostream>
#include<stdio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int season;
	
	printf("請輸入月份(1~12)\n");
	scanf("%d",&season);
	
	if(season>=3&season<=5)
	{
		printf("春天來瞭!");
	}
	else if(season>=6&season<=8)
	{
		printf("男人的季節!");
	}
	else if(season>=9&season<=11)
	{
		printf("秋天");
	}
	else if (season==12|season==1|season==2)
	{
		printf("冬天");
		
	}
	else if (season>=13)
	{
		printf("輸入錯誤");
	}
	return 0;
}
