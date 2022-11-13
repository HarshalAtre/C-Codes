#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
   int s=0;
   int e=n;
   while(s<=e){
    int mid=(s+e)/2;

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        return e=mid-1;
    }
    else{
        s=mid+1;
    }
   }
   return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}

// Time complexity of Binary Search
//
// After 1st itretion, Length of array = n 
// After 2nd itretion, Length of array = n/2 
// After 3rd itretion, Length of array = n/4=n/2^2 
// After k itretion, Length of array = n/2^k 
//
// Let the length of array becomes 1 after k itretion 
// 1=n/2^k
// n=2^k
// log(n)=k log(2)  [log (base e) e =1]
// k=log(n)
//
// time complexity = O(log(n))
// as log(n)<n
// Therefore,Binary search is faster than linear