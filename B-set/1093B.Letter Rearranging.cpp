/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 15

#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n, m) printf("%d %d",n,m)
#define pffl(n, m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main() {
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    string s;
    set<char> ss;

    sf(t);
    for (i = 1; i <= t; i++) {
        cin >> s;

        sort(s.begin(), s.end());
        ss.clear();

        n = s.length();
        for (j = 0; j < n; j++)
            ss.insert(s[j]);

        if (ss.size() == 1)
            pfs("-1\n");

        else
            cout << s << endl;
    }

    return 0;
}
