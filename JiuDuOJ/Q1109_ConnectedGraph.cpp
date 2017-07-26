//#include <stdio.h>
//
//#define N 1001
//
//int Tree[N];
//
//int findRoot(int x)
//{
//	if(Tree[x] == -1) 
//	{
//		return x;
//	}
//	else
//	{
//		int temp = findRoot(Tree[x]);
//		Tree[x] = temp;
//		return temp;
//	}
//
//}
//
//int main()
//{
//	int n, m;
//
//	while(scanf("%d%d", &n, &m) != EOF  &&  n != 0)
//	{	
//		for(int i=1; i<=n; i++)	Tree[i] = -1;	// i=1  i<=n
//		
//		int a, b;
//		
//		for(int i=0; i<m; i++)
//		{
//			scanf("%d%d", &a, &b);
//
//			a = findRoot(a);	// forgot
//			b = findRoot(b);
//
//			if(a != b)  Tree[a] = b;
//
//		}
//
//		int ans = 0;
//
//		for(int i=1; i<=n; i++)
//		{
//			if(Tree[i] == -1)  ans++;
//			
//			if(ans > 1)  break;
//		}
//
//		//printf("ans:  %d\n", ans);
//
//		if(ans > 1)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			printf("YES\n");
//		}
//
//	}
//
//}