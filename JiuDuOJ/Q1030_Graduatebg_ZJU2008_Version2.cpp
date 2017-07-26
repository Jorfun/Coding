/*
	This solution is quite tricky
	
	0-1 package problem(a bit of different)

	Reference from user sumi in web http://blog.csdn.net/wconvey/article/details/7510316

	时间有先后性，同时该题中每个bg有结束时间的限制(这个决定了最后dp[bg[n].endTime]不一定为最大值)，与正常背包问题有所区别。
	为了得到最后答案需要求所有dp[..]中的最大值!!!

*/


//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//struct B
//{
//	int happiness;
//	int needTime;
//	int endTime;
//
//	bool operator < (const B &b) const
//	{
//		return endTime < b.endTime;
//	}
//
//}bg[31];
//
//int dp[1000];
//
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF && n >= 0)
//	{
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
//		sort(bg + 1, bg + n + 1);
//
//		memset(dp, 0, sizeof(dp));
//
//		for(int i=1; i<=n; i++)		// 对于每一次循环的含义：在i不变时，让该bg（i）尝试所有可能的结束时间，得出目前最大的欢乐度
//		{
//			for(int j=bg[n].endTime; j>=bg[i].needTime; j--)
//			{
//				if(j <= bg[i].endTime)  dp[j] = max(dp[j], dp[j - bg[i].needTime] + bg[i].happiness);
//			}
//		}
//
//		int ans = 0;
//
//		for(int i=1; i<=bg[n].endTime; i++)
//		{
//			ans = max(ans, dp[i]);
//		}
//
//		//printf("\n");
//		//for(int i=0; i<=bg[n].endTime; i++)  printf("%d\n", dp[i]);
//		//printf("\n");
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}

