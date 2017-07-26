/*
	copy from user kuangbin in web http://www.cnblogs.com/kuangbin/archive/2011/07/27/2119026.html

	At first I use array to store all numbers. Then I compare them with each other and divide one of them the GCD. 
	Finally multiple all of them get the answer. But the answer always wrong. Maybe there is somewhere I haven't considered.
	Now I adopt a better way to solve this problem.
*/

//#include<stdio.h>
//
//int gcd(int a, int b)
//{
//    return b == 0 ? a : gcd(b, a % b);       // forgot
//}   
//
//int main()
//{
//    int T;
//    int n,a,b,i;
//    int cnt;
//
//    scanf("%d",&T);
//
//    while(T--)
//    {
//        scanf("%d",&n);
//        cnt=a=1;
//
//        for(i=1;i<=n;i++)
//        {
//            scanf("%d",&b);
//            cnt=a/gcd(a,b)*b;//换一下，先除后乘，免得数据溢出 
//            a=cnt;
//        } 
//
//        printf("%d\n",cnt);   
//
//    }    
//
//    return 0;
//
//}    

