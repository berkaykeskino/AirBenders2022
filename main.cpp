#include <iostream>
#define g 9.80665
using namespace std;

int main(){
    float time;
    float x;
    cin >> time;
    x = (1./2) * g * time * time;
    cout << x;
}
