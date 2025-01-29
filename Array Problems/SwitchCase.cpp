#include<iostream>
using namespace std;

int __init__(){
    cout<<"1. Insert\n";
    cout<<"2. Delete\n";
    cout<<"3. Create\n";
    cout<<"4. Traverse\n";
    cout<<"5. Search\n";
    cout<<"6. Sort\n";
    cout<<"7.  sum";
    return 0;
}
    

int main(){
    // menu();
    cout<<"Enter your operation choice in 1 to 7 : ";
    int choice;
    cin>>choice;
    int arr[5];
    switch (choice){
    case 1:
        // cout<<"ENter the size of an array: ";
        // int size;
        // cin>>size;
        
        for(int i=0;i<5;i++){
            cin>>arr[i];
        }
        cout<<"Array elements : ";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        break;
    
    default:
        cout<<"Default result";
        break;
    }
    
}