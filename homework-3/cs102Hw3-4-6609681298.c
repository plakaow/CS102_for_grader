#include<stdio.h>
void main(){

    int i,j,k,size,num[100][100] = {0}
        ,sum_odd[100] = {0},sum_even[100] = {0},
        total_even[100] = {0},total_odd[100] = {0},
        max_even[100] = {0},max_odd[100] = {0},
        maximum_even,maximum_odd;

    scanf("%d",&size);

    for(i = 0; i < size;i++){
        for(j = 0;j < size;j++){
            scanf("%d",&num[i][j]);
        }
    }
    if(size % 2 == 0){

        for(i = 0;i < size ;i++){
            for(j = 0; j < size;j++){
                sum_even[0] = sum_even[0] + ((num[(size/2)-1][j] + num[(size/2)][j])/2);
                sum_even[1] = sum_even[1] + ((num[j][(size/2)-1] + num[j][(size/2)])/2);
                sum_even[2] = sum_even[2] + num[j][j];
                sum_even[3] = sum_even[3] + num[j][(size - j)-1];

                total_even[0] = sum_even[0];
                total_even[1] = sum_even[1];
                total_even[2] = sum_even[2];
                total_even[3] = sum_even[3];
            }
            sum_even[0] = 0;
            sum_even[1] = 0;
            sum_even[2] = 0;
            sum_even[3] = 0;
        }

        if(total_even[0] > total_even[1]&&total_even[2]&&total_even[3]){
            maximum_even = total_even[0];
        }
        if(total_even[1] > total_even[0]&&total_even[2]&&total_even[3]){
            maximum_even = total_even[1];
        }
        if(total_even[2] > total_even[0]&&total_even[1]&&total_even[3]){
            maximum_even = total_even[2];
        }
        if(total_even[3] > total_even[0]&&total_even[1]&&total_even[2]){
            maximum_even = total_even[3];
        }
        else if(total_even[0] == total_even[1]&&total_even[2]&&total_even[3]){
            maximum_even = total_even[0];
        }
        /*else if(total_even[1] == total_even[0]&&total_even[2]&&total_even[3]){
            maximum_even = total_even[1];
        }
        else if(total_even[2] == total_even[1]&&total_even[0]&&total_even[3]){
            maximum_even = total_even[2];
        }
        else if(total_even[3] == total_even[1]&&total_even[2]&&total_even[0]){
            maximum_even = total_even[3];
        }*/
        printf("%d",maximum_even);

    }else{

        for(i = 0;i < size; i++){
            for(j = 0;j < size;j++){
                sum_odd[0] = sum_odd[0] + num[(size -1)/2][j];
                sum_odd[1] = sum_odd[1] + num[j][(size -1)/2];
                sum_odd[2] = sum_odd[2] + num[j][j];
                sum_odd[3] = sum_odd[3] + num[j][(size - j)-1];

                for(k = 0;k < 4;k++){
                    total_odd[k] = sum_odd[k];

                }
            }

            for(k = 0;k < 4;k++){
                sum_odd[k] = 0;
            }
        }

        if(total_odd[0] > total_odd[1]&&total_odd[2]&&total_odd[3]){
            maximum_odd = total_odd[0];
        }
        if(total_odd[1] > total_odd[0]&&total_odd[2]&&total_odd[3]){
            maximum_odd = total_odd[1];
        }
        if(total_odd[2] > total_odd[0]&&total_odd[1]&&total_odd[3]){
            maximum_odd = total_odd[2];
        }
        if(total_odd[3] > total_odd[0]&&total_odd[1]&&total_odd[2]){
            maximum_odd = total_odd[3];
        }
        else if(total_odd[0] == total_odd[1]&&total_odd[2]&&total_odd[3]){
            maximum_odd = total_odd[0];
        }
        /*else if(total_odd[1] == total_odd[0]&&total_odd[2]&&total_odd[3]){
            maximum_odd = total_odd[1];
        }
        else if(total_odd[2] == total_odd[1]&&total_odd[0]&&total_odd[3]){
            maximum_odd = total_odd[2];
        }
        else if(total_odd[3] == total_odd[1]&&total_odd[2]&&total_odd[0]){
            maximum_odd = total_odd[3];
        }*/
    printf("%d",maximum_odd);
    }
    return 0;
}
