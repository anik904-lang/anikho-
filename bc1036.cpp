#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    double A,B,C;
    cin>>A>>B>>C;

    double delta=B*B-4*A*C;
    if(A==0 || delta<0){
        cout<<"impossivel calcular"<<endl;

    }else{
        double R1=(-B+sqrt(delta))/2*A;
         double R2=(-B-sqrt(delta))/2*A;

         cout<<fixed<<setprecision(5)<<"R1 = "<<R1<<endl;
          cout<<fixed<<setprecision(5)<<"R2 = bc"<<R2<<endl;
        

    }
    return 0;
}