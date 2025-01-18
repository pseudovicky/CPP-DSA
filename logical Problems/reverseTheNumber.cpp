#include<iostream>
using namespace std;

// problem statement :-
// take a number input and reverse the number.
// eg : input = 12345 , expected output = 54321

int main(){
    int num;
    cout<<"Inpput a number which you want to reverse : ";
    cin>>num;
    while(true){
        if(num>0){
            int rem = num%10;
            cout<<rem;
            num = num/10;
        }else{
            break;
        }
    }

    return 0;
}