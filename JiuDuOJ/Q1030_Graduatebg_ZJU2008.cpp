/*
	Main idea: Enumeration (backtracking enumeration by recursion)

*/

//#include <stdio.h>
//
//struct B
//{
//	int happiness;
//	int needTime;
//	int endTime;
//
//}bg[31];
//
//bool mark[31];
//
//int max, n;
//
//void DFS(int currentTime, int value)
//{
//	if(value > max)
//	{
//		max = value;
//	}
//
//	for(int i=1; i<=n; i++)
//	{
//		if(mark[i] == true)  continue;
//
//		if(currentTime + bg[i].needTime <= bg[i].endTime)
//		{
//			int tempValue = value + bg[i].happiness;
//			int tempTime = currentTime + bg[i].needTime;
//
//			mark[i] = true;
//			DFS(tempTime, tempValue);
//			mark[i] = false;
//
//		}
//
//	}
//
//}
//
//
//int main()
//{
//
//	while(scanf("%d", &n) != EOF && n >= 0)
//	{
//		max = 0;
//		
//		for(int i=1; i<=n; i++)  mark[i] = false;
//
//		if(n == 0)
//		{
//			printf("0\n");
//			continue;
//		}
//
//		for(int i=1; i<=n; i++)
//		{
//			scanf("%d%d%d", &bg[i].happiness, &bg[i].needTime, &bg[i].endTime);
//		}
//	
//		DFS(0, 0);
//
//		printf("%d\n", max);
//
//	}
//
//	return 0;
//}