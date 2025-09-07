#include<stdio.h>
int main(){
    int X;
    float Y;
    scanf("%d%f",&X,&Y);
    float consumption=X/Y;
    printf("%.3f km/l",consumption);
    return 0;
}