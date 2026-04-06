//Havins toji
//Department of biotechnology
#include<stdio.h>
int main()
{
    int  num1,num2,choice,sum,subtract, multiply, divide;
    printf("enter two integer");
    scanf("%d%d", &num1,&num2);
    printf("1.addition, \n2.substraction, \n3.multiplication,\n4.division\nenter your choice");
    
    scanf("%d",&choice);
    
    sum=num1+num2;
    subtract=num1-num2;
    multiply=num1*num2;
    divide=(num1/num2);
    
    if(choice==1) printf("%d is the sum", sum );
    
    else if (choice==2)  printf("subtraction is %d", subtract);
    
    else if(choice==3) printf("multiplication is %d", multiply);
    
    else if(choice==4) printf("division is %d", divide);
    
    else printf("invalid choice");
    
    return 0;
    
   } 