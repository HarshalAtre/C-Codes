#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,op,i,j;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
           }
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}