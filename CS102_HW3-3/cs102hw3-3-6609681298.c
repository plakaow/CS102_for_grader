#include<stdio.h>
#include <string.h>

void main(){

    int sum[12][999] = {0},total[12] = {0},
        maximum = -999,
        i, j , k ;

    char sum_first[12] = {'1','2','3','4','5','6','7','8','9','A','B','C'}, c[999];

    scanf("%s", &c);
    int Arrlen = strlen(c);

    for(i = 0; i < 12;i++){
        for(j = 0; j < Arrlen;j+=2){
            if(c[j] == sum_first[i]){
                if(c[j + 1] >= 65 && c[j + 1] <= 90){
                    sum[i][j] = c[j + 1];
                }
            }
        }
    }

    for(i = 0; i < 12; i++){
        for(j = 65; j <= 90;j++){
            for(k = 0;k < 999;k++){
                if(sum[i][k] == j && sum[i][k] != 0){
                    total[i]++;
                    break;
                }
            }
        }
    }

    for(i = 0;i < 12;i++){
        if(maximum <= total[i]){
            maximum = total[i];
        }
        printf("%d\n",total[i]);
    }

    printf("%d",maximum);

    return 0;
}
