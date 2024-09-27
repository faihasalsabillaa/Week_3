#include <iostream>
using namespace std;

//wk3_q2_largestnum
//Ratu Faiha Salsabilla Rahmadina_532756

int main(){
    double num1, num2, num3;

// first we ask the user to input the values of the three numbers
    cout << "Input number 1: ";
    cin >> num1;
    cout << "Input number 2: ";
    cin >> num2;
    cout << "Input number 3: ";
    cin >> num3;

//determining the largest number
    double largest = num1;

    if (num2 > largest){ 
        largest = num2;
    }
    if (num3 > largest){ 
        largest = num3;

    }
        cout << "The largest number out of the three values is: " << largest << endl;

    return 0;
}