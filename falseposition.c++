#include<iostream>
#include<cmath>
using namespace std;

double fx(double x){
    return (x*x*x)-(2*x)-5 ;
}

double gx(double x0, double x1){
    return x0-((x1-x0)*fx(x0))/(fx(x1)-fx(x0));

}

int main(){
    double x0,x1,x2;
    cout<< "Enter value for x0: ";
    cin>> x0;
    cout<< "Enter value for x1: ";
    cin>> x1;

if (fx(x0)*fx(x1)<0){
    cout <<"correct values, root lies between x0 & x1 \n";
    


while(true){
    x2=gx(x0,x1);
    cout<< "x2 = "<<x2<<"f(x2) = "<<fx(x2)<<endl;


if(fx(x2)==0 || abs(x0-x1)>0.00001){
    cout<<"Exact root found: "<<x2<<endl;
    break;
}

if(fx(x0)*fx(x2)<0){
    x1 = x2;
}
    else {
    x0 = x2;
}
    cout<<"Root approximation : "<<x2<<endl;
} 
  } else {
    cout <<"Incorrect values, no root lies  between x0 & x1 \n";

}
    
    return 0;
    
}