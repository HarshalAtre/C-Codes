#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Input A Number"<<endl;
    cin>>n;

    if(n==10){
        cout<<"The Number is 10";
    }else if(n<10){
        cout<<"The Number Is Smaller Than 10";
    }else if(n>10){
        cout<<"The Number Is Greater Than 10";
    }else{
        cout<<"Invalid Input";
    }

    return 0;
}