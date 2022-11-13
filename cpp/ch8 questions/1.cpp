#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
    cin>>arr[i];
    }

    int max=INT_MIN;

    for(i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    cout<<max<<" "<<endl;
    }

    // for(i=0;i<n;i++){
    // cout<<arr[i]<<" ";
    // }
    return 0;
}