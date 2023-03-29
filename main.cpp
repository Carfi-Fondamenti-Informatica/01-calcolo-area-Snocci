#include <iostream>
using namespace std;

int main(){
    float a;
    float b;
    float c;
    float Triangolo, Quadrato, Rettangolo, Trapezio;
    cout << "Insersci tre valori" << endl;

cin >> a >> b >> c;
    
    Triangolo= (a*b)/2;
    Quadrato= a*a;
    Rettangolo= a*b;
    Trapezio= ((a+b)*c)/2;
    cout << "Calcolo area:" << endl;
    cout  << Triangolo << endl;
    cout  << Quadrato << endl;
    cout << Rettangolo << endl;
    cout  << Trapezio << endl;
    return 0;


}
