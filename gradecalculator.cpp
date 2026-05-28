#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter the numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1<40||num2<40||num3<40){
        cout<<"fail";
    
    }
    else{
        float avg=(num1+num2+num3)/3.0;
        cout<<"Average:"<<avg<<endl;
        if(avg>=80){
            cout<<"grade:A"<<endl;
        }
        else if(avg>=60){
            cout<<"grade:B"<<endl;
        }
        else if(avg>=50){
            cout<<"grade:C"<<endl;
        }
        else{
            cout<<"grade:D";
        }
        
    }
}