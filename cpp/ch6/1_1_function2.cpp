#include <iostream>
using namespace std;

void print(int num){
    cout<<num;
    return;
}
int sum(int n1,int n2){
print(n1);
print(n2);
 int sum=n1+n2;
 return sum;
}


int main(){
     int a,b;
     a=5;
     b=6;
     sum(a,b);
    
    return 0;
}