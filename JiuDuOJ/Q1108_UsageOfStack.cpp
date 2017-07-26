//#include <stdio.h>
//#include <stack>
//
//using namespace std;
//
//stack<int> s;	// forget define
//
//int main()
//{
//	int n;
//
//	while(scanf("%d", &n) != EOF && n != 0)		// n != 0 judge after EOF
//	{
//		char tempC;
//		int tempNum, i;
//
//		for(i=0; i<n; i++)
//		{
//			//printf("i= %d  n= %d\n", i, n);
//			scanf("%c", &tempC);
//			//printf("tempC is: %d\n", tempC);
//
//			// !!! scanf("%c", &tempC); may get a '\n' or ' ' !!!
//			// another way to implement this:  char c[10];  scanf("%s",c);  if(c[0] == 'A')
//
//			if(tempC == '\n' || tempC == ' ')	
//			{
//				i--;
//				continue;
//			}
//
//			switch(tempC)
//			{
//				case 'P':	scanf("%d", &tempNum);
//							s.push(tempNum);
//							break;
//
//				case 'O':	if(!s.empty())	s.pop();
//							break;
//
//				case 'A':	if(!s.empty())
//							{
//								printf("%d\n", s.top());	// no pop in here!!!
//							}
//							else
//							{
//								printf("E\n");
//							}
//							
//			}
//
//		}
//
//		while(!s.empty()) s.pop();	// !!!!!!! cost 2 or 3 hours !!!!!!!
//
//		printf("\n");
//		
//	}
//
//	return 0;
//}