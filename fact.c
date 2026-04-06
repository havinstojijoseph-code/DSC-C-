//Havins toji
//Department of biotechnology
#include<stdio.h>
void  main()
{
  int n,i, fact;
  i=1;
  fact=1;
  printf("enter your number");
  scanf("%d",&n);
  while(i<=n)
  {
  fact=i*fact;
  i++;
  }
  printf("factorial is %d", fact);
  }
  
  