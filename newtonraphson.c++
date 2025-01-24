#include<iostream>
#include<cmath>
using namespace std;

double fx(double x){
return (x*x*x*x)-x-10;
}

double gx(double x){
return 4*(x*x*x)-1;
}

int main(){

double x0,x1;
int i=1,n;
cout<<"Enter Initial Guess Value: ";
cin>>x0;
cout<<"Enter No. of Iteration to be Performed: ";
cin>>n;

do
{
x1=x0-(fx(x0)/gx(x0));
cout<<"Iteration "<<i<<"\t";
cout<<"x1 : "<<x1<<" f(x1) "<<fx(x1)<<" g(x1) "<<gx(x1)<<endl;
x0=x1;
i++;
}while(abs(fx(x0))>0.0001 && i<=n);

return 0;
}