#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    double a,b,c,x1,x2,D;
    cin >> a >> b >> c;
    D = pow(b,2)-4*a*c;
    if (a != 0 && b != 0 && c != 0) { // Все не равны 0
        if (D >= 0) {
            if (D > 0) { // Два корня
                x1 = (-b + sqrt(D)) / (2 * a);
                x2 = (-b - sqrt(D)) / (2 * a);
                if (x1 > x2) {
                    cout << 2 << " " << x2 << " "  << x1;
                } else {
                    cout << 2 << " " << x1 << " "  << x2;
                }
            } else cout << 1 << " " << (-b) / (2 * a); // Один корень
        } else cout << 0; // Нет корней
    } else if (a == 0 && b == 0 && c == 0){ // Все равны 0
        cout << 3;
    } else if (a == 0){
        if  (b == 0){
            cout << 0; // а и b = 0
        } else cout << 1 << " " << -c/b; // а = 0 или а и с = 0
    } else if (b == 0){
        if (c != 0) {
            if (-c > 0) {
                cout << 2 << " " << -sqrt(-c / a) << " " << sqrt(-c / a); // b = 0 и с больше 0
            } else cout << 0; // b = 0 и с меньше 0
        } else cout << 1 << " " << 0; // c = 0 b = 0
    } else if (c == 0){
        cout << 2 << " " << 0 << " " << -b; // c = 0
    }
}

