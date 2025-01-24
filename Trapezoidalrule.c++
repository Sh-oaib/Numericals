#include<iostream>
//#include<cmath>
using namespace std;

double fx(double x){
    return 1/(1+(x*x));
}

int main(){

    float y [10], result = 0; 
    int j=0;

    for( int i=0; i<=6; i++){
        y[j] = fx(i);
        cout<<"y["<<j<<"]"<<"\t"<<y[j]<<"\n";
        j++;
    } 
    result=(y[0]+y[6]+2*(y[1]+y[2]+y[3]+y[4]+y[5]));
    result = 1.0/2.0*result;
    cout<<"result is: "<<result;
}