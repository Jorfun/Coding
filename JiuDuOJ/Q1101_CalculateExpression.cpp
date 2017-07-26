//#include <stdio.h>
//#include <stack>
//
//using namespace std;
//
//stack<int> in;		// calculate answer may not be integer
//stack<int> op;
//
//char str[300];
//
//int mat[][5] = {
//					1, 0, 0, 0, 0,
//					1, 0, 0, 0, 0,
//					1, 0, 0, 0, 0,
//					1, 1, 1, 0, 0,
//					1, 1, 1, 0, 0
//
//				};		// 1 '+'  2 '-'  3 '*'  4 '/'
//
//void getOp(bool &reto, int &retn, int &i)
//{
//	if(i == 0 && op.empty() == true)	// begin
//	{
//		reto = true;
//		retn = 0;
//		return;
//	}
//
//	if(str[i] == 0)		// end
//	{
//		reto = true;
//		retn = 0;
//		return;
//	}
//
//	if(str[i] >= '0' && str[i] <= '9')
//	{
//		reto = false;
//	}
//	else
//	{
//		reto = true;
//
//		switch(str[i])
//		{
//			case '+':	retn = 1;
//						break;
//			case '-':	retn = 2;
//						break;
//			case '*':	retn = 3;
//						break;
//			case '/':	retn = 4;
//		}
//
//		i++;
//
//		return;
//	}
//
//	retn = 0;
//
//	for(; str[i] != 0; i++)
//	{
//		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
//		{
//			break;
//		}
//		
//		retn *= 10;
//		retn += str[i] - '0';
//	}
//
//	return;
//
//}
//
//int main()
//{
//	// if use while(gets(str)) will occur run time error 
//	// because there may be two expressions in one line
//	while(scanf("%s", str) != EOF)	
//	{
//		bool retop;
//		int retnum;
//		int idx = 0;
//
//		while(!op.empty()) op.pop();
//		while(!in.empty()) in.pop();
//
//		while(true)
//		{
//			getOp(retop, retnum, idx);
//
//			if(retop == false)
//			{
//				in.push((double)retnum);
//			}
//			else
//			{
//				int tmp;
//				
//				if(op.empty() == true || mat[retnum][op.top()] == 1)
//				{
//					op.push(retnum);
//				}
//				else
//				{
//					while(mat[retnum][op.top()] == 0)
//					{
//						int ret = op.top();
//						op.pop();
//						double b = in.top();
//						in.pop();
//						double a = in.top();
//						in.pop();
//
//						switch(ret)
//						{
//							case 1: tmp = a + b;
//									break;
//
//							case 2: tmp = a - b;
//									break;
//
//							case 3: tmp = a * b;
//									break;
//
//							case 4:	tmp = a / b;
//
//						}
//
//						in.push(tmp);
//
//					}
//
//					op.push(retnum);
//
//				}
//			}
//
//			if(op.size() == 2 && op.top() == 0) break;
//
//		}
//
//		printf("%d\n", in.top());
//	}
//
//	return 0;
//}