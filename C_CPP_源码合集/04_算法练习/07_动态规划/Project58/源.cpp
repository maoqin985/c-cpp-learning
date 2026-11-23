//#include <istream>
//#include<string>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int n;
//	if (!(cin >> n))
//		return 0;
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		if (s.size() >= 5)
//			cout << '6' << s.substr(s.size() - 5) << '\n';
//		else
//			cout << '6' << s << '\n';
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int aa;
//    scanf("%d", &aa);
//    for (int bb = 1; bb <= aa; bb++) {
//        int cc;
//        scanf("%d", &cc);
//        int dd[1005];
//        for (int ee = 0; ee < cc; ee++) {
//            scanf("%d", &dd[ee]);
//        }
//        int ff[1005], gg = 0;
//        long long hh = 0;
//        int ii = 0;
//        for (int ee = 0; ee < cc; ee++) {
//            ff[gg++] = dd[ee];
//        }
//        while (gg > 0) {
//            hh += (long long)ii * ff[--gg];
//            ii++;
//        }
//        printf("Case #%d: %lld\n", bb, hh);
//    }
//    return 0;

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 105;
int dp[MAXN][MAXN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string A, B;
    while (cin >> A >> B) {
        int n = A.size();
        memset(dp, 0x3f, sizeof(dp));
        for (int i = 0; i < n; ++i) dp[i][i] = (A[i] == B[i] ? 0 : 1);

        for (int len = 2; len <= n; ++len) {
            for (int l = 0; l + len - 1 < n; ++l) {
                int r = l + len - 1;
                if (B[l] == B[r]) {
                    dp[l][r] = min(dp[l + 1][r], dp[l][r - 1]);
                }
                for (int k = l; k < r; ++k) {
                    dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r]);
                }
                if (A[l] == B[l]) dp[l][r] = min(dp[l][r], dp[l + 1][r]);
            }
        }
        cout << dp[0][n] << '\n';
    }
    return 0;
}




























































































