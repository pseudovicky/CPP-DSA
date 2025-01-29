#include<vector>
#include<iostream>
using namespace std;
int main(){
    // vector<int> vec;
    // vec = {1,2,3};
    // for (int i=0;i<5;i++){
    //     cin>>vec[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<vec[i];
    // }

    // vector<int> vec(5);
    // vec.push_back(10);
    // vec.push_back(20);
    // vec(1,2,3,4,5);
    // cout<<vec[1];

    // err :
    // syntax.cpp:5:17: error: non-aggregate type 'vector<int>' cannot be initialized with an initializer list 5 | vector<int> vec = {1,2,3}; | ^ ~~~~~~~ 1 error generated.

    // always compile with g++ -std=c++11 file.cpp
    // other wise u get an error msg 

    vector<int> vec(5);
    vec[0] = 10;  // Assigns 10 to the first element
    vec[1] = 20;
    vec[2] = 30;
    vec[3] = 40;
    vec[4] = 50;
    for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";  // Output: 10 20 30 40 50
}


    // for each loop
    cout<<endl<<endl;
    vector<int> vec2 (3,0);
    for(int i : vec2){
        cout<<i<<endl;
    }
    return 0;
}