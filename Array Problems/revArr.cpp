#include<iostream>
using namespace std;

void revArr(int arr[], int sz){
    int start =0;
    int end=sz-1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    {
        /* code */
    }
    
}
int main(){
    int arr[]= {10,44,20,83,82,92,58,62,75,82,57};
    int size = 11;
    
    revArr(arr, size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}