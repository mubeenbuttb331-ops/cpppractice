#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num:"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
    int a,b,c;
    cout<<"enter 3 values"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"A is largest"<<endl;
    }
    else if(b>a&&b>c){
        cout<<"B is greater"<<endl;
    }
    else{
        cout<<"c is greatest"<<endl;
    }
    int num1;
    cout<<"enter num:"<<endl;
    cin>>num1;  
    if(num1>0){
        cout<<"number is positiive"<<endl;
    }
    else if(num1<0){
        cout<<"number is negatve"<<endl;
    }
    else{
        cout<<"number is zero"<<endl;
    }
    int year;
    cout<<"enter year:"<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0 ||year%40==0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"not a leap year"<<endl;
    }
}