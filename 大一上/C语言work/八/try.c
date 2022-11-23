#include<stdio.h>
findmin(int *s, int t, int *k)
{
 int p;
 for(p=0;p<t;p++)
 {
  if(s[p]<s[*k]) 
  *k=p;
 }
}

main()
{
 int a[10],i,*k=&i;
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 i=0;
 findmin(a, 10,k);
 printf("%d,%d", *k,a[*k]);
}

