#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;

    int arr[n];
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    int count;
    for(i=0;i<n;i++){
        count=0;
        for(j=i;j<n;j++){
         count+=arr[j];
         cout<<count<<endl;
        }
    }
    return 0;
}