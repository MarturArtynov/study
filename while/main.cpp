#include <iostream>
using namespace std;
int main() {
    int N = 1,count=0, loc1 = 90000000,loc2 = 90000000,loc3 = 0, time = 0,now=0,range= 8000000;
    while (N != 0){
        cin >> N;
        if (N != 0){
        loc3 = N;
        if (loc2 > loc3 && loc2 > loc1){
            if (now > 0 && (time-now)<range){
                    range = time - now;
                }
            now = time;
        }
        loc1 = loc2;
        loc2 = N;
        time++;
        }
    }
    cout << (range != 8000000 ? range : 0);
	return 0;
}

