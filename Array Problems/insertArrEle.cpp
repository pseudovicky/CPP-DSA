#include <iostream>
using namespace std;

// create an array then insert a new element on desire position then search and 
// find that element in new array which created after inserting new element.
int main()
{
    int n, i;
    int p, v, d;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cout<<"enter the "<<i+1<<" value : ";
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }

    //adding a new value at the positon
    cout<<"enter the position where you want to add: ";
    cin>>p;
    cout<<"enter the value you want to insert: ";
    cin>>v;
    p=p-1;
    n++;
    arr[n];
    for(i=n; i>=p; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[p]=v;
    for(i=0; i<n; i++)
    {
        cout<<arr[i];
        cout<<"\n";
    }
int flag =0;
    //searching a particular value in array/
    cout<<"enter the value you want to search: ";
    cin>>d;
    for(i=0; i<=n; i++)
    {
        if(arr[i]==d)
        {
            flag=1;
        }

    }
    if(flag==1){cout<<"found";}
    else{cout<<"not found";}

    return 0;

}