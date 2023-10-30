#include<stdio.h>
void main(){


    int i,p = 0,total,one_two[32][32];
    char first[32], sec[32];

    scanf("%c%c %c%c %c%c",&first[0],&sec[0],&first[1],&sec[1],&first[2],&sec[2]);

    for(i = 0;i < 3;i++){
        switch(first[i])
        {
        case '1':
            one_two[0][p] = 10;
            p++;
            break;
        case '2':
            one_two[1][p] = 20;
            p++;
            break;
        case '3':
            one_two[2][p] = 30;
            p++;
            break;
        default:
            printf("END\n");
        }
        p = 0;
    }
    printf("%d %d %d",one_two[0][p],one_two[0][p],
           one_two[0][p]);

    return 0;

}
