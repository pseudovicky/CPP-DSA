#include<iostream>
using namespace std;

    // multiplication of two array 
int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        int n;
        cout<<"enter the elemnt on the arr["<<i<<"] index : ";
        cin>>n;
        arr[i] = n;
    }
    cout<<"Enter the number of position you want to free space over there : ";
    int position;
    cin>>position;
    int insert;
    cout<<"input the value you want to insert :  ";
    cin>>insert;
    for(int element=size;element>position-1;element--){
        arr[element]= arr[element-1];
    }
    arr[position] = insert;
    cout<<"Element insertesd successfully...!!\n";
    cout<<"Now the new array is : \n ";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
