#include <stdio.h>
void main(){

    //≥—∞π—π∑Ï ®—π∑√Ï ¡∫Ÿ√≥Ï 6609681298

    int x,y,i,j,count=0;
    char c;
    printf("Enter size of your rectangle: ");
    scanf("%d %d",&x,&y);


    for(i = 0;i<x;i++){
        for(j=0;j<y;j++){
            if(count%2==0){
                c = 'O';
                }else{
                    c = 'X';
                }
            printf("%c",c);
            count++;
        }
        printf("\n");
    }


    return 0;
}
