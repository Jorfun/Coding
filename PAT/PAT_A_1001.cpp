/*
	copy from other's work
*/

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//
//  int a, b;
//  vector<int> digits;
//
//  cin>>a>>b;
//
//  a += b;
//
//  if(a < 0)
//  {
//    cout<<"-";
//    a = -a;
//  }
//
//  do
//  {
//
//    digits.insert(digits.begin(), a%10);
//    a /= 10;
//
//  }while(a > 0);
//
//  for(int i=0, size=digits.size(); i<size; i++)
//  {
//
//    if((size-i)%3 == 0 && i)	// !!!!
//    {
//      cout<<",";
//    }
//
//    cout<<digits[i];
//  }
//
//  //cout<<0.f;
//
//  return 0;
//
//}

//v.insert(v.begin(),8);//在最前面插入新元素。   
//v.insert(v.end(),3);//在向量末尾追加新元素。