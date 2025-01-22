#include<iostream>
using namespace std;

    // multiplication of two array 
int main(){
    int Arr[5] = {2,4,6,8,10};
    int n;
    cout<<"Enter the number you want ro delete from array : ";
    cin>>n;
    for(int element=0;element<5;element++){
        if(Arr[element]==n){
            Arr[element] = Arr[element+1];
            n=Arr[element+1];
        }
    }
    for(int i=0;i<5;i++){
        cout<<Arr[i];  
    }
    cout<<" \n last value is = "<<n<<"\n";
    return 0;
}
