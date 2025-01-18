#include<iostream>
using namespace std;

    // multiplication of two array 
int main(){
    int oddNumArray[5] = {2,4,6,8,10};
    int evenNumArray[5] = {1,3,5,7,9};

    for(int element=0;element<5;element++){
        // multiply the array
        cout<<oddNumArray[element]*evenNumArray[element]<<"\n";
    }
    return 0;
}
