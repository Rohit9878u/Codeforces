#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int mn = 0;

        for (int i = 0; i < n; ) {
            if (s[i] == '1') {
                int j = i;
                while (j < n && s[j] == '1') j++;

                int len = j - i;
                mn += (len + 1) / 2;

                i = j;
            } 
            else i++;
        }

        int first = -1, last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }

        int mx = 0;
        if (first != -1)
            mx = last - first + 1;

        cout << mn << " " << mx << endl;
    }
}