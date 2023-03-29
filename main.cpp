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
    cout <<"Area del triangolo=" << Triangolo << endl;
    cout << "Area del quadrato=" << Quadrato << endl;
    cout << "Area del rettangolo=" << Rettangolo << endl;
    cout << "Area del trapezio=" << Trapezio << endl;
    return 0;


}
