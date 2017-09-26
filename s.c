#include<stdio.h>
void  main()
{
      int i,m,sum,n,avg;
      sum=0;
      printf("enter  the value  of  m");
      scanf("%d",&m);
      for(i=0;i<m;i++)
      {
           scanf("%d",&n);
           sum+=n;
      }
      printf("sum is %d",sum);
      avg=sum/n;
      printf("avg is %d",avg);       
}

