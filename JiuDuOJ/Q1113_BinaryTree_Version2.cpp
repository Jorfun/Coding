/*
	copy from user named upyzl in web http://t.jobdu.com/thread-7836-1-1.html
*/

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//        int n,m,left,right;
//        int count;
//        int deep_n,deep_m,deep_diff;
//        
//		while(scanf("%d%d",&m,&n) != EOF)
//		{
//			if(n == 0 && m == 0) break;
//
//            count = 0;
//            left = right = m;
//
//            deep_n = (int)(log((double)n) / log(2.0) + 1);
//            deep_m = (int)(log((double)m) / log(2.0) + 1);
//
//            deep_diff = deep_n - deep_m;
//
//            count += (int)pow(2.0, deep_diff) - 1;
//
//            for(int i=1; i<=deep_diff; ++i)
//            {
//                left = 2 * left;
//                right = 2 * right + 1;
//            }
//
//            if(right<=n)
//				count += right - left + 1;
//            else if(left<=n)
//                count += n - left + 1;
//                                
//            printf("%d\n",count);
//
//        }
//
//    return 0;
//
//}