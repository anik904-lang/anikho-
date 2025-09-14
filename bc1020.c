#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int years=num/365;
    int months=(num%365)/30;
    int days=(num%365)%30;
    printf("%d ano(s)\n",years);
     printf("%d mes(es)\n",months);
      printf("%d dia(s)\n",days);
      return 0;

}