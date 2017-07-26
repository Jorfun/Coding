//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//char s[110];
//char a[110];
//char b[110];
//
//int main()
//{
//
//	while(gets(s))
//	{
//		gets(a);
//		gets(b);
//
//		string ans = s;
//		string target = a;
//		string replace = b;
//
//		ans += ' ';		//  ignore this special situation(You want -> Youwant) when these two words combine together, you can't replace
//		target += ' ';
//		replace += ' ';
//
//		int t = ans.find(target, 0);
//
//		while(t != string::npos)
//		{	
//			ans.erase(t, target.size());
//			ans.insert(t, replace);
//			t = ans.find(target, t);
//		}
//
//		ans.erase(ans.size() - 1, 1);		// erase last ' '
//
//		cout<<ans<<endl;
//
//	}
//
//	return 0;
//}