#include <iostream>
using namespace std;
int main(){
   int a=10;
   int b;

   b=a++;// a get remains preserved for current value and gets increse when called again or printed ,so a prints 11 but b prints 10 
   cout<<a<<" "<<b<<endl;

  
    return 0;
}
