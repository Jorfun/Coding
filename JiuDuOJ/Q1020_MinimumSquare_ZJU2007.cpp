/*
	Simple question
*/

//#include <stdio.h>
//
//int main()
//{
//	int minX = 232, minY = 232, maxX = -232, maxY = -232;
//	bool firstCoord = true;
//	int x, y;
//
//	while(scanf("%d%d", &x, &y) != EOF)
//	{
//
//		if(firstCoord == true)
//		{
//			if(x == 0 && y == 0)
//			{
//				break;
//			}
//
//			firstCoord = false;
//		}
//
//		if(x == 0 && y == 0)
//		{
//			printf("%d %d %d %d\n", minX, minY, maxX, maxY);
//			
//			minX = 232;
//			minY = 232;
//			maxX = -232;
//			maxY = -232;
//			firstCoord = true;
//			continue;
//		}
//		else
//		{
//			if(x < minX)
//			{
//				minX = x;
//			}
//			
//			if(x > maxX)
//			{
//				maxX = x;
//			}
//
//			if(y < minY)
//			{
//				minY = y;
//			}
//			
//			if(y > maxY)
//			{
//				maxY = y;
//			}
//
//		}
//
//	}
//
//	return 0;
//}