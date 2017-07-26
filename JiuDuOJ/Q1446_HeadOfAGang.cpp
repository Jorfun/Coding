//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//#define N 262627
//
//int Tree[N];
//int sum[N];		//	total relation weight of a gang
//int member[N];		//	total member of a gang
//int totalWeight[N];		//	total weight of a specific men
//int ans[6000];		// store name value of gang heads
//
//int findRoot(int x)
//{
//	if(Tree[x] == -1)  return x;
//	
//	int temp = findRoot(Tree[x]);
//	Tree[x] = temp;
//	return temp;
//
//}
//
//int main()
//{
//	int n, threthold;
//
//	while(scanf("%d%d", &n, &threthold) != EOF)
//	{
//		//	initial arrays
//		for(int i=0; i<26; i++)  
//		{
//			for(int j=0; j<26; j++)
//			{
//				for(int k=0; k<26; k++)
//				{
//					Tree[i*10000 + j*100 + k] = -1;
//					sum[i*10000 + j*100 + k] = 0;
//					member[i*10000 + j*100 + k] = 1;
//					totalWeight[i*10000 + j*100 + k] = 0;
//				}
//			}
//
//		}
//
//		char name1[4], name2[4];
//		int a, b, time;
//
//		for(int i=0; i<n; i++)
//		{
//			scanf("%s%s%d", name1, name2, &time);
//
//			a = (name1[0] - 'A') * 10000 + (name1[1] - 'A') * 100 + (name1[2] - 'A');
//			b = (name2[0] - 'A') * 10000 + (name2[1] - 'A') * 100 + (name2[2] - 'A');
//
//			totalWeight[a] += time;
//			totalWeight[b] += time;	
//
//			a = findRoot(a);
//			b = findRoot(b);
//
//			if(a != b)	// if these two person are not in the same gang
//			{
//				Tree[a] = b;
//				sum[b] += (sum[a] + time);
//				member[b] += member[a];
//			}
//			else	// if they are in the same gang
//			{
//				sum[b] += time;
//			}
//
//		}
//
//		int count = 0;
//
//		//	find all the gangs and store the current root of these gang
//		for(int i=0; i<26; i++)  
//		{
//			for(int j=0; j<26; j++)
//			{
//				for(int k=0; k<26; k++)
//				{
//					int nameValue = i*10000 + j*100 + k;
//
//					if(Tree[nameValue] == -1  &&  member[nameValue] > 2  &&  sum[nameValue] > threthold)  
//					{				
//						ans[count++] = nameValue;			
//					}
//				}
//			}
//
//		}
//
//		printf("%d\n", count);
//
//		//	find heads of all gangs in terms of totalWeight of a person
//		for(int c=0; c<count; c++)
//		{
//			for(int i=0; i<26; i++)  
//			{
//				for(int j=0; j<26; j++)
//				{
//					for(int k=0; k<26; k++)
//					{
//						int nameValue = i*10000 + j*100 + k;
//						int temp = findRoot(nameValue);
//						int temp2 = findRoot(ans[c]);
//
//						if(temp == temp2  &&  totalWeight[ans[c]] < totalWeight[nameValue])
//						{
//							member[nameValue] = member[ans[c]];
//							ans[c] = nameValue;					
//						}
//					}
//				}
//			}
//		}
//
//		sort(ans, ans + count);
//
//		for(int i=0; i<count; i++)
//		{
//			printf("%c%c%c %d\n", ans[i] / 10000 + 'A', ans[i] / 100 % 100 + 'A', ans[i] % 100 + 'A', member[ans[i]]);
//		}
//
//	
//	}
//
//}