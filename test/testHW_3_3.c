#include<stdio.h>
void main(){

    int num[] = {1,2,3,4,4,4,5,1,5,2},sarub = 0,i,j,count = 0,lenght = 0;

    for(i = 0;i < 10; i++){
        if(num[i] > num[i+1]){
            sarub = num[i];
            num[i+1] = sarub;
            num[i] = num[i+1];
        }
    }
    for(j = 0;j < 10 ;j++){

        if(num[j] != num[j+1]){
            lenght++;
        }

    }

    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
    printf("count = %d\n",count);
    if(lenght != 0){
        lenght+=1;
        printf("%d",lenght);
    }else{
    printf("lenght = 0");}
    printf("totale = %d",count + lenght);




}
