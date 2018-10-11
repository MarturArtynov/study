#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    double a,b=0;
    vector <int> A(8);//Размер шахматной доски
    vector <int> B(8);
    for (int i = 0; i < 8; i++){
        cin >> A[i];
        cin >> B[i];//Координаты ферзей
    }
    for (int i = 0; i < 8; i++){
        for (int g = 0; g<8; g++ ){
            if (i !=g){
                if (A[i] != A[g] && B[i] != B[g]){
                                for (int f = 0; f < 8; f++) {
                                    if (A[i] + f != A[g] && B[i] + f != B[g]) {
                                        b++;
                                    }
                                }
                                for (int f = 0; f < 8; f++) {
                                    if (A[i] + f != A[g] && B[i] - f != B[g]) {
                                        b++;
                                    }
                                }
                                for (int f = 0; f < 8; f++) {
                                    if (A[i] - f != A[g] && B[i] + f != B[g]) {
                                        b++;
                                    }
                                }
                                for (int f = 0; f < 8; f++) {
                                    if (A[i] - f != A[g] && B[i] - f != B[g]) {
                                        b++;
                                    }
                                }

                    }
                }

            }
        }
        if (b == 1568){
            cout << "NO";//Не бюьт друг друга
        } else {
            cout << "YES";//Бьют друг друга
        }
}

