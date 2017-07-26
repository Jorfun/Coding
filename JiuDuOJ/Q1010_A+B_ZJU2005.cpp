/*
	copy from others. It's worth learning.
*/

//#include <stdio.h>
//
//int change(char e[])
//{
//	switch(e[0])
//	{
//		case 'z': return 0;
//		case 'o': return 1;
//
//		case 't': if(e[1] == 'w')
//				  {
//					  return 2;
//				  }
//				  else
//				  {
//					  return 3;
//				  }
//
//		case 'f': if(e[1] == 'o')
//				  {
//					  return 4;
//				  }
//				  else
//				  {
//					  return 5;
//				  }
//
//		case 's': if(e[1] == 'i')
//				  {
//					  return 6;
//				  }
//				  else
//				  {
//					  return 7;
//				  }
//
//		case 'e': return 8;
//
//		case 'n': return 9;
//
//		default: return -1;
//	}
//
//}
//
//int main()
//{
//	char s[6];
//	int a,b;
//
//	while(scanf("%s",s) != EOF)
//	{
//		a = change(s);
//
//		while(scanf("%s",s) != EOF)
//		{
//			if(s[0] != '+' && s[0] != '=')
//			{
//				a *= 10;
//				a += change(s);
//			}
//			else if(s[0] == '+')
//			{
//				b = a;
//				a = 0;
//			}
//			else if(s[0] == '=')
//			{
//				break;
//			}
//		}
//
//		if(a || b)
//		{
//			printf("%d\n", a + b);
//		}
//		else
//		{
//			return 0;
//		}
//
//	}
//
//	return 0;
//
//}