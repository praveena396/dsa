#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={5,4,3,2,1};

    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini])
            mini=j;
        }
            int temp= arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
        for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    }
    
