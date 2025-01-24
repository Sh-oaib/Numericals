#include<iostream>
#include<cmath>
using namespace std;

double fx(double x){
    return 1/exp(x*x);
}

int main(){
    float y[10], result = 0;
    int j=0;

    for(int i=0; i<=0.7; i=i+0.1){
        y[j]= fx(i);
        cout<<"y["<<j<<"]"<<"\t"<<y[j]<<"\n";
        j++;

    }
    result = ((2*0.1)/45) * (7*(y[0]+y[6]) + 32*(y[1]+y[2]+y[3]+y[5]) + 12*(y[2]) + 14*(y[4]));
   // result = 3.0*1.0/8.0 * result;
    cout << "result is "<<result;
}