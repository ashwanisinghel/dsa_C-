/* finding first and last occurence of an element in an sorted array 
using binary search algorithm*/
#include <iostream>
using namespace std;
int firstOcc(int *arr,int n,int k){
    int s=0;
    int e=n-1;
    int m= s+(e-s)/2;
    int ans;
    while(e>=s){
        if(arr[m]==k){
            ans=m;
            e=m-1;
        }else if(arr[m]>k){
            e=m-1;
        }else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int *arr,int n,int k){
    int s=0;
    int e=n-1;
    int m= s+(e-s)/2;
    int ans;
    while(e>=s){
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }else if(arr[m]>k){
            e=m-1;
        }else{
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int n;
    cout<<"enter the no of element in array"<<endl;
    cin>>n;
    int *arr= new int[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the key"<<endl;
    cin>>k;
    cout<<firstOcc(arr,n,k)<<","<<lastOcc(arr,n,k);
}
