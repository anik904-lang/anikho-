#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int hours=n/3600;
    int minutes=(n%3600)/60;
    int seconds=n%60;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}