#include <iostream>
#include <cstdlib>
using namespace std;

const float pi = 3.14;
int main(){
    float r, alan, cevre;
    cout <<"Dairenin yaricapini giriniz: ";
    cin >> r;
    alan = pi*r*r;
    cevre = 2*pi*r;
    cout <<"Dairenin alani: " << alan << endl;
    cout <<"Dairenin cevresi: " << cevre << endl;
    system("pause");
    return 0;
}