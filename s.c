#include<stdio.h>
void  main()
{
      int i,m,sum,n;
      sum=0;
      scanf("%d",&m);
      for(i=0;i<m;i++)
      {
           scanf("%d",&n);
           sum+=n;
      }
      printf("sum is %d",sum);
}

