#include<stdio.h>
int main()
{
printf("enter two number: ");
scanf("%d %D",&num1,&num2);

if (num1=num2)
{
    printf("Result: %d > %d",num1,num2);

}
else if(num1>num2) {
    printf("result:%d > %d",num1,num2);
}
else {
    printf("Result: %d < %d",num1,num2);
}