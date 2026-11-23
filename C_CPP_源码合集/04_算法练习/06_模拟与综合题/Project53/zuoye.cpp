//#include <iostream>
//#include <vector>
//using namespace std;
//using ll = long long;
//int n, q;
//vector<ll> s;
//vector<int> lz;
//void a(int i, int L, int R, int v) { s[i] = ll(R - L + 1) * v; lz[i] = v; }
//void p(int i, int L, int R) {
//    if (lz[i] == 0) return;
//    int M = (L + R) >> 1;
//    a(i << 1, L, M, lz[i]);
//    a(i << 1 | 1, M + 1, R, lz[i]);
//    lz[i] = 0;
//}
//void u(int i, int L, int R, int ql, int qr, int v) {
//    if (ql > R || qr < L) return;
//    if (ql <= L && R <= qr) { a(i, L, R, v); return; }
//    p(i, L, R);
//    int M = (L + R) >> 1;
//    u(i << 1, L, M, ql, qr, v);
//    u(i << 1 | 1, M + 1, R, ql, qr, v);
//    s[i] = s[i << 1] + s[i << 1 | 1];
//}
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int T;
//    if (!(cin >> T)) return 0;
//    for (int tc = 1; tc <= T; ++tc) {
//        cin >> n >> q;
//        s.assign(4 * n + 5, 0);
//        lz.assign(4 * n + 5, 0);
//        a(1, 1, n, 1);
//        for (int i = 0; i < q; ++i) {
//            int x, y, z; cin >> x >> y >> z;
//            u(1, 1, n, x, y, z);
//        }
//        cout << "Case #" << tc << ": " << s[1] << "\n";
//    }
//    return 0;
//}
#include<stdio.h>
int main() {
    float a, m;
    scanf_s("%f", &a);
    int b = a * 10;
    int c = 0;
    do { 
        c *= 10;
        c += b % 10;
    } while (b /= 10);
    m = (float)c* 0.001;
    printf("%.3f", m);
    return 0;
}