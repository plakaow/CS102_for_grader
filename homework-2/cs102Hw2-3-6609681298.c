#include<stdio.h>
int main()
{

    //6609681298≥—∞π—π∑Ï ®—π∑√Ï ¡∫Ÿ√≥Ï
    int inputN1, inputN2,i, total = 0;
    printf("please enter Num1: ");
    scanf("%d",&inputN1);
    printf("please enter Num2: ");
    scanf("%d",&inputN2);
    for(int i = inputN1; i <= inputN2; i++){
        if (i % 6 == 0&&i % 9 == 0)
        {
            printf("%d ",i);
            total = total + i;


        }

    }
    printf("\ntotal is %d",total);

    return 0;
}
