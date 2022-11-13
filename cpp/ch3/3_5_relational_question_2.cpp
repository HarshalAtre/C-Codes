#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"The Number Is Divisible By Both";
    }
    else if(n%2==0){
        cout<<"The Number Is Divisible By 2 Only";
    }
    else if(n%3==0){
        cout<<"The Number Is Divisible By 3 Only";
    }else{
        cout<<"Divisible By Neither";
    }
    

    return 0;
}