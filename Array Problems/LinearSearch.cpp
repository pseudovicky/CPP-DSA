#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int targetEl){
    for(int i=0;i<size;i++){
        if(arr[i]== targetEl){ 
            // found target element
            return i;
        }
    }
    return -1; // value not found
}
int main(){
    int arr[]= {10,20,83,62,58,62,75,82,57};
    int size = 9;
    cout<<"Enter the value you want to search in the array : ";
    int targetEl;
    cin>>targetEl;
    cout<<linearSearch(arr, size, targetEl)<<endl;

    return 0;
}