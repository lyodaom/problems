#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector<ii > vii;
typedef vector<iii > viii;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, c;
    cin >> a >> b >> c;
    int result = max(a*b*c, a*b+c);
    result = max(result, a+b*c);
    result = max(result, (a+b)*c);
    result = max(result, a*(b+c));
    result = max(result, a+b+c);
    cout << result << endl;
    return 0;
}
