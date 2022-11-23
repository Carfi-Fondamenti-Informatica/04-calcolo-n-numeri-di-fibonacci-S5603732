#include <iostream>
using namespace std;

int main() {
   int a = 1, b = a, n, c, i=0;
    cin >> n;
    if (n>=2) {
    cout << a << endl;
    cout << a << endl;
        while (i < (n - 2)) {
            i++;
            c = a + b;
            cout << c << endl;
            b = a;
            a = c;
        }
    } else {
        cout << "errore";
    }
   return 0;
}
