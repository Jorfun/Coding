/*
	This solution is quite tricky
	
	0-1 package problem(a bit of different)

	Reference from user sumi in web http://blog.csdn.net/wconvey/article/details/7510316

	ʱ�����Ⱥ��ԣ�ͬʱ������ÿ��bg�н���ʱ�������(������������dp[bg[n].endTime]��һ��Ϊ���ֵ)������������������������
	Ϊ�˵õ�������Ҫ������dp[..]�е����ֵ!!!

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
//		for(int i=1; i<=n; i++)		// ����ÿһ��ѭ���ĺ��壺��i����ʱ���ø�bg��i���������п��ܵĽ���ʱ�䣬�ó�Ŀǰ���Ļ��ֶ�
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

