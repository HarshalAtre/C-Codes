#include <iostream>
using namespace std;
int fact(int n){
    int factorial=n;
    for(int i=1;i<=n-1;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;

   int ans=fact(n);
   cout<<ans;
    return 0;
}