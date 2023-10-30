#include<stdio.h>
void main(){
    //6609681298
    int hMom, hDad;
    printf("Enter height of mother:");
    scanf("%d",&hMom);
    printf("Enter height of father:");
    scanf("%d",&hDad);
    int hAvg = (hMom + hDad)/2;
    int minH = hAvg - 12;
    int maxH = hAvg + 12;
    printf("the possible height is between %d and %d centimeters",minH,maxH);
}
