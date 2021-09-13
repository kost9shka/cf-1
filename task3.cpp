#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int n, l;
    cin >> n;
    for (int a = 0; a < n; a++) {
        cin >> l;
        string s;
        cin >> s;
        if (s.find('U') < s.length()) {
            replace(s.begin(), s.end(), 'U', 'D');
        }
        else if (s.find('D') < s.length()) {
            replace(s.begin(), s.end(), 'D', 'U');
        }
 
        cout << s << endl;
    }
 
}
