#include <iostream>
 
using namespace std;
 
int main()
{
    int a, d, e;
    double b, c, sum;
    cin >> a;
    for (int count = 0; count < a; count++) {
        cin >> sum;
        c = round(sum / 3);
        b = sum - (c * 2);
        e = c;
        d = b;
        
        cout << d << " " << e << endl;
    }
}
