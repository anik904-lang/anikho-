#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int years=num/365;
    int months=(num%365)/30;
    int days=(num%365)%30;
    cout<<years<<" ano(s)"<<endl;
     cout<<months<<" mes(es)"<<endl;
      cout<<days<<" dia(s)"<<endl;
      return 0;
}