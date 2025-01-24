#include<iostream>
#include<cmath>
using namespace std;

double fx(double x){
    return 1/(1+(x*x));
}

int main(){
    float y[10], result = 0;
    int j=0;

    for(int i=0; i<=0.7; i++){
        y[j]= fx(i);
        cout<<"y["<<j<<"]"<<"\t"<<y[j]<<"\n";
        j++;

    }
    result = ((3*0.1)/10) * (y[0]+5*y[1] + y[2]+6*y[3]+y[4] + 5*y[5] + 2*y[6]);
   // result = 3.0*1.0/8.0 * result;
    cout << "result is "<<result;
}