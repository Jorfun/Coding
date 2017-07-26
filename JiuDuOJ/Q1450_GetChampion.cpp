/*
	This question is not as difficult as first time I thought..To find a champion you only need to judge if there
	is only one point whose inDegree is 0.
*/

//#include <stdio.h>
//#include <string.h>
//
//#define max 2000
//
//char name[max][20];
//int inDegree[max];		//  forgot
//int size;
//
//int getValue(char *s)	//  copy from other's program. Good idea.
//{
//	int i;
//
//	for(i=0; i<size; i++)
//	{
//		if(strcmp(name[i], s) == 0)  break;
//	}
//
//	if(i == size)
//	{
//		strcpy(name[size++], s);
//	}
//
//	return i;
//}
//
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF  &&  n != 0)
//	{
//		size = 0;
//
//		for(int i=0; i<max; i++)
//		{
//			inDegree[i] = 0;
//		}
//
//		for(int i=0; i<n; i++)
//		{
//			char a[20], b[20];
//			
//			scanf("%s%s", a, b);
//
//			int aValue, bValue;
//
//			aValue = getValue(a);
//			bValue = getValue(b);
//
//			inDegree[bValue]++;
//			
//		}
//
//		int count = 0;
//
//		for(int i=0; i<n; i++)
//		{
//			if(inDegree[i] == 0)
//			{
//				count++;
//			}
//
//		}
//
//		if(count == 1)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//
//	}
//
//	return 0;
//}