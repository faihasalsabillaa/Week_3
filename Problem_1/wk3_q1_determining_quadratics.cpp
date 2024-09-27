#include <iostream>
#include <cmath>
using namespace std; 

//wk3_q1_determing_quadratics
//Ratu Faiha Salsabilla Rahmadina_532756
int main()
{
    double a, b, c;

    cout << "Enter Coefficient a: ";
    cin >> a;
    cout << "Enter Coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    //calc the discriminant
    double d = b*b - 4*a*c;

    //determining the nature of the roots (real, only one real, complex roots)
    
    if (d>0){
        double x1 = (-b + sqrt(d))/(2 * a);
        double x2 = (-b - sqrt(d))/(2 * a);
        cout << "These two roots are real and distinct" << endl;
    }
    else if (d==0){
        double x1 = -b/(2 *a);
        cout << "These two roots are real and equal" << endl;
    }
    else {
        cout << "These two roots are complex and are imaginary" << endl;
    }
    return 0;
    }
