#include <iostream>
using namespace std;
int main(){
    
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int count=1;
        for(j=1;j<=i;j++){
            cout<<" "<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}