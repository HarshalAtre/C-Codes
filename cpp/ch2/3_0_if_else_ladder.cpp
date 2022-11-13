#include <iostream>
using namespace std;

int main(){
    
    int money;
    cin>>money;

    if(money>15000){
    
      if(money>25000){
            cout<<"Oneplus";
        }
        else{
            cout<<"POCO";
        }
    }
    else if(money>10000){
        cout<<"Get a cricket kit";
    }
    else{
        cout<<"Dont Buy phone";
    }
    return 0;
}