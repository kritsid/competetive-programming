// sliding window - longest substring with k unique characters
#include <algorithm>
#include <set>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    int k;
    cin >> s;
    cin >> k;
    int len = 0;
    string out;
    set<char> st;
    vector<char> cc;
    for (int i = 0, j = 1; j <= s.size() && i < s.size();)
    {
        string news = s.substr(i, i + j);
        set<char> x(begin(news), end(news));
        if (x.size() == k && news.size() > len)
        {
            len = news.size();
            out = news;
            j++;
        }
        else if (x.size() > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        // cout << news << ' ' << x.size() << "\n";
    }
    cout << out << len;

    return 0;
}
