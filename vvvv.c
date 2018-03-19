#include <stdio.h>
 #include<conio.h>
int main()
{
  int n,i,a[10];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      if(a[i]!=i)
      {
          printf("%d",i);
      }
  }
}
