//#include <stdio.h>
//#include <math.h>
//
//#define ISYEAP(s) (s % 100 != 0 && s % 4 == 0) || s % 400 == 0 ? 1 : 0		//	forgot
//
//int dayOfMonth[13][2] = {
//							0, 0,
//							31, 31,
//							28, 29,
//							31, 31,
//							30, 30,
//							31, 31,
//							30, 30,
//							31, 31,
//							31, 31,
//							30, 30,
//							31, 31,
//							30, 30,
//							31, 31
//						};		// forgot
//
//struct Date
//{
//
//	int year;
//	int month;
//	int day;
//
//	void nextday()		//	forgot
//	{
//		day++;
//
//		if(day > dayOfMonth[month][ISYEAP(year)])
//		{
//			day = 1;
//			month++;
//		
//			if(month > 12)
//			{
//				month = 1;
//				year++;
//			}
//		}
//	}
//};		// don't miss ;
//
//int buf[3001][13][32];
//
//int main()
//{
//	int count = 1;
//
//	Date tmp;
//
//	tmp.year = 1;
//	tmp.month = 1;
//	tmp.day = 1;
//
//	while(tmp.year <= 3000)
//	{
//		buf[tmp.year][tmp.month][tmp.day] = count;
//
//		tmp.nextday();
//
//		count++;
//	}
//
//	int y, n;
//
//	while(scanf("%d%d", &y, &n) != EOF)
//	{
//		tmp.year = y;
//		tmp.month = 1;
//		tmp.day = 1;
//
//		while(tmp.year == y)
//		{
//			if((buf[tmp.year][tmp.month][tmp.day] - buf[tmp.year][1][1] + 1) == n)
//			{
//
//				printf("%04d-%02d-%02d\n",tmp.year,tmp.month, tmp.day);		// very useful
//				
//				break;
//			}
//
//			tmp.nextday();
//		}
//
//	}
//
//	return 0;
//}