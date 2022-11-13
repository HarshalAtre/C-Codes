#include <iostream>
using namespace std;
void ispy(int a,int b ,int c){
   int m=max(a,max(b,c));
   if(m==a){
    if(a*a==(b*b)+(c*c)){
        cout<<"They Are Pythagorian Triplet";  
    }else{
        cout<<"They Are Not Pythagorian Triplet";  
    }
   }
   if(m==b){
    if(b*b==(a*a)+(c*c)){
        cout<<"They Are Pythagorian Triplet";  
    }else{
        cout<<"They Are Not Pythagorian Triplet";  
    }
   }
   if(m==c){
    if(c*c==(a*a)+(b*b)){
        cout<<"They Are Pythagorian Triplet";  
    }
    else{
        cout<<"They Are Not Pythagorian Triplet";  
    }
   }
   return;
}
int main(){
 int j,k,l;
 cin>>j>>k>>l;
 ispy(j,k,l);
}