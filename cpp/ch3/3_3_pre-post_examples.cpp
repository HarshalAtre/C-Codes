#include <iostream>
using namespace std;
int main(){
    int i=1;
       
     //1   //3 =4
    i= i++ + ++i ;

    // cout<<i;

    int a=1;
    int b=3;
    int z;
      
      //1   //3   //5   //3 =12
    z= a++ + b++ + ++b + ++a;

    // cout<<z;

    int j,k,l;
    j=10,k=20;
      
    //10   //9   //19  //9 //19  //10  //10 = 10
    l=j-- - j++ + --k+ --j- k-- + ++j - j++;

    cout<<l;

    return 0;
}