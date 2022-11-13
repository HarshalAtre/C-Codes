//Funtions
// used to avoid writting repeatative code again and again
//perfors a speciefic task
//
//Syntax
//
//returntype functionName (parameter1,parameter2){
     //functionbody
//}
// AN Example Below:
#include <iostream>
using namespace std;

int sum(int n1,int n2){
   int sum=n1+n2;
   return sum;
}


int main(){
     int a,b;
     a=5;
     b=6;
     cout<<sum(a,b);
    return 0;
}