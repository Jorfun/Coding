//#include <stdio.h>
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
//int main()
//{
//	int year, num, count, month, day;
//	bool ifYeap;
//
//	while(scanf("%d%d", &year, &num) != EOF)
//	{
//		ifYeap = ISYEAP(year);
//
//		count = 1;
//
//		month = 1;
//		day = 1;
//
//		while(count != num)
//		{
//			day++;
//			count++;
//
//			if(day > dayOfMonth[month][ifYeap])
//			{
//				month++;
//				day = 1;
//			}
//		}
//
//		printf("%04d-%02d-%02d\n", year, month, day);		// very useful
//
//	}
//
//	return 0;
//
//}