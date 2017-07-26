/*
	Very easy, there are only 3 situations
*/

//#include <stdio.h>
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		int currentFloor = 0;
//		int totalTime = 0;
//		
//		while(n--)
//		{
//			int targetFloor;
//
//			scanf("%d", &targetFloor);
//
//			if(targetFloor > currentFloor)
//			{
//				totalTime += (targetFloor - currentFloor) * 6 + 5;
//			}
//			else if(targetFloor < currentFloor)
//			{
//				totalTime += (currentFloor - targetFloor) * 4 + 5;
//			}
//			else
//			{
//				totalTime += 5;
//			}
//
//			currentFloor = targetFloor;
//
//		}
//
//		printf("%d\n", totalTime);
//
//	}
//
//	return 0;
//}