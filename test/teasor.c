#include<stdio.h>
void main(){

    char first[16],sec[16],sec_2[16][16] = {0},temp,c = 65;
    int i,j,k,p[12] = {0},count[12] = {0},length[12] = {0},max = 0;

    //input √—∫§Ë“®“°user 16 µ—«Õ—°…√
    for(i = 0;i < 16;i++){
        scanf("%c%c",&first[i],&sec[i]);
    }
    //‡™Á§input·≈–π”‰ª‡°Áπ„πarray¢Õß‡‡µË≈–‡¥◊Õπ
    for(i = 0;i < 16;i++){
        switch(first[i])
        {
        case '1':
            sec_2[0][p[0]] = sec[i];
            p[0]++;
            break;
        case '2':
            sec_2[1][p[1]] = sec[i];
            p[1]++;
            break;
        case '3':
            sec_2[2][p[2]] = sec[i];
            p[2]++;
            break;
        case '4':
            sec_2[3][p[3]] = sec[i];
            p[3]++;
            break;
        case '5':
            sec_2[4][p[4]] = sec[i];
            p[4]++;
            break;
        case '6':
            sec_2[5][p[5]] = sec[i];
            p[5]++;
            break;
        case '7':
            sec_2[6][p[6]] = sec[i];
            p[6]++;
            break;
        case '8':
            sec_2[7][p[7]] = sec[i];
            p[7]++;
            break;
        case '9':
            sec_2[8][p[8]] = sec[i];
            p[8]++;
            break;
        case 'A':
            sec_2[9][p[9]] = sec[i];
            p[9]++;
            break;
        case 'B':
            sec_2[10][p[10]] = sec[i];
            p[10]++;
            break;
        case 'C':
            sec_2[11][p[11]] = sec[i];
            p[11]++;
            break;
        }
    }

    //π—∫®”π«πµ—«Õ—°…√„πarray(µ—«´È”π—∫·§Ëµ—«‡¥’¬«)
    for(i = 0; i < 26;i++){
        for(j = 0;j < 12;j++){
            for(k = 0;k < 16;k++){
                if(c+i == sec_2[j][k]){
                    count[j]++;
                    length[j] = count[j];
                    break;
                }
            }
        }
    }

    //À“§Ë“ Ÿß ÿ¥„πarray
    for(i = 0;i < 12;i++){
        if(length[i] > max){
            max = length[i];
        }
    }

    //1A1F1A1B1A1D1D1D1A2B2C2E3F3F3E3E

    for(i = 0;i < 12;i++){
        printf("%d\n",length[i]);
    }
    printf("%d\n",max);

    return 0;

    //non-loop version

    /*
    char c = 65,info[] = {'A','B','A','C'};
    int count = 0,i,j;
    for(i = 0;i < 4;i++){
        if(c == info[i]){
            count++;
            break;
        }
    }
    for(i = 0;i < 4;i++){
        if(c+1 == info[i]){
            count++;
            break;
        }
    }

    for(i = 0;i < 4;i++){
        if(c+2 == info[i]){
            count++;
            break;
        }
    }

    printf("%d\n",count);
    printf("%d",c);
    */
    //looped version
    /*
    char c = 65,info[] = {'A','B','A','C'};
    int count = 0,i,j;

    for(j =0;j < 24;j++){
        for(i = 0;i < 4;i++){
        if(c+j == info[i]){
            count++;
            break;
            }
        }
    }
    printf("%d\n",count);
    printf("%d",c);
    */
}
