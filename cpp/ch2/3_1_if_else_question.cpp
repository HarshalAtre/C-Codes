#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   if(a>b){
    if(a>c){
        cout<<a<< "is max";
    }
    else{
        cout<<c<< "is max";
   
    }}
    else if(a>c){
        if(a>b){
        cout<<a<< "is max";

        }
        else{
        cout<<b<< "is max";

        }
    }
    else if(c>a){
        if(c>b){
        cout<<c<< "is max";

        }
        else if(c<b){
        cout<<b<< "is max";

        }
    }
    return 0;
   }
