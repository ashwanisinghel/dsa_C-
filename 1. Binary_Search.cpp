// trying code binary search
#include <iostream>
using namespace std;
int binary_search(int *arr,int n,int key){
    int s=0;
    int e=n-1;
    int m=(s+e/2);
    while(e>=s){
        if(arr[m]==key){
            return m;
        }
        if(arr[m]>key){
            e=m-1;
        }else{
            s=m+1;
        }
        m=(s+e)/2;    
        
    }
    return -1;
    
}
int main(){
    int n; cout<<"enter the array length"; cin>>n;
    int arr[n];
    int key; 
    int i=0;
    while(i<n){
        // array should be monotonic while implementing binary search
        cin>>arr[i];
        i++;
    }
    int key; cout<<"enter the key"; cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}
