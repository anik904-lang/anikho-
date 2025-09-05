#include<stdio.h>
int main(){
    double R,volume;
    scanf("%lf",&R);
    volume=(4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %.3lf",volume);
    return 0;
}