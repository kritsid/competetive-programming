#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("inp3.in", "r", stdin);
    //freopen("out3.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c[2] = {0, 0};
        for(int i = 0; i < s.size(); i++) c[s[i] - '0']++;
        if(c[0] && c[1]) {
            cout << "1 " << max(c[0], c[1]) - min(c[0], c[1]) + 1 << "\n";
            while(c[0] != c[1]) {
                string now = "";
                int flag = 1;
                for(int i = 0; i < s.size(); i++) {
                    if(s[i] != s[i + 1] && flag) {
                        flag = 0;
                        cout << i + 1 << " " << i + 2 << " ";
                        if(c[0] > c[1]) cout << "1\n", c[1]++, now += '1';
                        else cout << "0\n", c[0]++, now += '0';
                        i++;
                    } else now += s[i];
                }
                s = now;
            }
            cout << "1 " << s.size() << " 0\n";
        } else cout << s.size() << " 0\n";
    }
}