//Havins toji 
//Department of biotechnology 
#include<stdio.h>
void sum(int n);
void reverse(int rev);
int main()
{
int n;
printf("enter your number");
scanf("%d",&n);
reverse(n);
sum(n);
return 0;
}
void sum(int n)
{
int s=0,i, d ;

while (n!=0)
{
d=n%10;
s=s+d;
n=n/10;
}
printf("%d is the sum", s);
}
void reverse (int n)
{
int d, rev=0;
while(n!=0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
printf("%d is the reverse \n", rev);
}


