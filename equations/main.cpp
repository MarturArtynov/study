#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, d, e, f, x, y, delt, deltx, delty,k,n;
    cin >> a >> b >> c >> d >> e >> f ;
    delt = a*d - b*c;
    deltx = e*d - f*b;
    delty = a*f - e*c;
    if (delt != 0) {
        cout << 2 << " " << deltx / delt << " " << delty / delt;
    } else if(deltx == 0 && delty == 0) {
        if (a == 0 && b == 0 && c == 0 && d == 0){
            if (e != 0 || f != 0){
                cout << 0;
            }else {
                cout << 5;
            }
        } else if (a == 0 && c == 0) {
            if (b!=0){
                y = e/b;
            }else y = f/d;
            cout << 4 << " " << y;
        } else if (b == 0 && d == 0){
            if (a != 0){
                x = e/a;
            }else x = f/c;
            cout << 3 << " " << x;
        }else {

            if (b != 0) {
                n = e / b;
                k = -a / b;
            } else {
                n = f / d;
                k = -c / d;
            }
            cout << 1 << " " << k << " " << n;
        }

    } else {
        cout << 0 ;
    }
}

