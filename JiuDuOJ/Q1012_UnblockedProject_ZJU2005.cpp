/*
    Correct process for merging:			

			a = findRoot(a);
			b = findRoot(b);

			if(a != b)
			{
				tree[a] = b;
			}

*/

//#include <stdio.h>
//
//int tree[1001];
//
//int findRoot(int x)
//{
//	if(tree[x] == -1)  return x;
//
//	int temp = findRoot(tree[x]);
//	tree[x] = temp;
//	return temp;
//}
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		for(int i=1; i<=n; i++)
//		{
//			tree[i] = -1;
//		}
//
//		int m;
//
//		scanf("%d", &m);
//
//		int a, b;
//
//		while(m--)
//		{
//			scanf("%d%d", &a, &b);
//				
//			// These two lines are quite important
//			a = findRoot(a);
//			b = findRoot(b);
//
//			if(a != b)
//			{
//				tree[a] = b;
//			}
//
//		}
//
//		int count = 0;
//
//		for(int i=1; i<=n; i++)
//		{
//			if(tree[i] == -1)
//			{
//				count++;
//			}
//		}
//
//		printf("%d\n", count -1);
//
//	}
//
//	return 0;
//
//}