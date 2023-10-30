#include<stdio.h>
void main(){
    int input, hour, min, sec;
    printf("input number : ");
    scanf("%d",&input);
    min = input / 60;
    hour = input / 3600;
    printf("hour %d\n",hour);
    printf("min %d\n",(min%60)%60);
    printf("sec %d",input%60);
}
