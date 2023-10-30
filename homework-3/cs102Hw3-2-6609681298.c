#include<stdio.h>

//≥—∞π—π∑Ï ®—π∑√Ï ¡∫Ÿ√≥Ï 6609681298

void main(){
    int size,i,j,k,k2,num[20][20],sum_row = 0,sum_column = 0,sum_tayang = 0,total_row[20],total_column[20],total_tayang[20],boolen=0;
    printf("Enter size of your square: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&num[i][j]);
        }
    }

    int max_row,
        max_column = total_column[0],
        max_tayang,
        maximum;

    for(k=0;k<size;k++){
        for(k2=0;k2<size;k2++){
            sum_row = sum_row + num[k][k2];
            sum_column = sum_column + num[k2][k];
            sum_tayang = sum_tayang + num[k2][k2];

            total_row[k] = sum_row;
            total_column[k] = sum_column;
            total_tayang[k] = sum_tayang;

            if(total_row[k] > max_row){
                max_row = total_row[k];
            }
            if(total_column[k] > max_column){
                max_column = total_column[k];
            }
            if(total_tayang[k] > max_tayang){
                max_tayang = total_tayang[k];
            }


        }
        sum_row = 0;
        sum_column = 0;
        sum_tayang = 0;
    }
    if(max_row > max_column&&max_tayang){
        maximum = max_row;
    }
    if(max_column > max_row&&max_tayang){
        maximum = max_column;
    }
    if(max_tayang > max_column&&max_row){
        maximum = max_tayang;
    }
    if(total_row[0]==total_row[1]&&total_row[1]==total_row[2]&&total_row[2]==total_row[0]){
        boolen += 1;
    }
    if(total_column[0]==total_column[1]&&total_column[1]==total_column[2]&&total_column[2]==total_column[0]){
        boolen += 1;
    }
    if(boolen == 2){
        printf("Your square is a magic square!!\n");
        printf("the magic constant is %d\n",total_row[0]);
    }else{
        printf("your square is NOT a magic square.\n");
        printf("the maximum sum is %d",maximum);
    }

    return 0;
}
