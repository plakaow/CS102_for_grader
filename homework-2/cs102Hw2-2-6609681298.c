#include<stdio.h>
int main(){

    //6609681298 �Ѱ�ѹ�� �ѹ�������ó�
    int inputM, amount, pizza,n;
    printf("please enter a budget amount: ");
    scanf("%d",&inputM);
    amount = inputM % 599;
    pizza = inputM - amount;
    n = pizza / 599;
    printf("we can provide support fof %d students\n",(n * 8)/2);
    printf("the amount of budget remain %d baths", amount);



    return 0;
}
