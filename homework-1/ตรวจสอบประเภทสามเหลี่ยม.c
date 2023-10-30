#include<stdio.h>
 int main(){
    int num1, num2, num3;
    printf("Please enter length of each side of your triangle: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 > num2 + num3||
       num2 > num1 + num3||
       num3 > num2 + num1)
    {
        printf("this is NOT a triangle.");
    }
    else if(num1 == num2 && num2 == num3 && num3 == num1)
    {
        printf("this is an equilateral triangle");
    }
    else if(num1 != num2 && num2 !=  num3 && num3 != num1)
    {
        printf("this is a scalene triangle");
    }
    else
    {
        printf("this is an isosceles triangle");
    }

    return 0;
}
