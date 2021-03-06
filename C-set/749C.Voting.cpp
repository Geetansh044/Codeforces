/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 2000

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
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    string s;
    cin >> s;

    queue<int> D, R;

    for (i = 0; i < n; i++) {
        if (s[i] == 'D')
            D.push(i + 1);
        else
            R.push(i + 1);
    }

    while(true)
    {
        if(D.empty())
        {
            pfs("R");
            break;
        }

        else if(R.empty())
        {
            pfs("D");
            break;
        }

        if(D.front() < R.front())
        {
            k = D.front() + n;
            D.pop(); D.push(k);
            R.pop();
        }

        else
        {
            k = R.front() + n;
            D.pop(); R.push(k);
            R.pop();
        }
    }


    return 0;
}
