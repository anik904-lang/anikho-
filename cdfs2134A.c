#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);

    while (t--){
        long long  n,a,b;
         scanf("%lld%lld%lld",&n,&a,&b);
          if(a+b<=n+1){
            printf("YES\n");
          } else{
            printf("NO\n");
          }
    }

    return 0;
}
