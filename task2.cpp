#include <iostream>
 
using namespace std;
 
int main()
{
    int a, b, c, n, f;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a > b) {
            f = a;
            a = b;
            b = f;
        }
        if (b < (a * 2) || c >(2 * (b - a))) {
            cout << -1 << endl;
        }
        else if (c > (b - a)) {
            cout << c - (b - a) << endl;
        }
        else {
            cout << c + (b - a) << endl;
        }
    }
}
