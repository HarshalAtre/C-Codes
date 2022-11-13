#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
int lastdigit;
int sum=0;
int ogn=n;
    while(n>0){
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        n=n/10;
    }
    if(sum==ogn){
        cout<<"Its An armstrong Number";

    }else{
        cout<<"Its Not An armstrong Number";
    }
    return 0;
}