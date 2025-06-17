#include<iostream>
#include<cmath> 
using namespace std;
int main() {
    int a = 0, b = 0; 
    cout << "Welcome to the Hypotenuse Calculator!" << endl;
    cout<< "Enter the lengths of the two sides of the right triangle: \n " << endl;
    cin >> a >> b;
    int hypotenuse = sqrt(a * a + b * b);
    cout << "The length of the hypotenuse is: " << hypotenuse << endl;
    return 0;
}