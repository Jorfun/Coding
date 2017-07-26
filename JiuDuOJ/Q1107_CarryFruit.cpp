//#include <stdio.h>
//#include <queue>
//
//using namespace std;
//
//// 1: data type  2: container  3: comparison pattern
//// > > these two symbol should have a space between them
//priority_queue <int, vector<int>, greater<int> > Q;	
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF && n != 0)
//	{
//		while(!Q.empty()) Q.pop();
//
//		int a, b;
//		
//		for(int i=0; i<n; i++)
//		{
//			scanf("%d", &a);
//			Q.push(a);
//		}
//
//		int sum, answer = 0;
//
//		while(Q.size() > 1)
//		{
//			a = Q.top();
//			Q.pop();
//			b = Q.top();
//			Q.pop();
//			sum = a + b;
//			answer += sum;
//			Q.push(sum);
//		}
//
//		printf("%d\n", answer);
//
//	}
//
//
//	return 0;
//}
