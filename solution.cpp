#include <iostream>

using namespace std;
#define int long long


int totient(int n) {
    int result = n;
    for (int p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}


int gcd(int a, int b){
    while(a > 0 && b > 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    return a;
}


void solve() {


    int N, L, R, mod = 1000000007;
    cin >> N >> L >> R;
    int phi = totient(N);
    int ans = ((R - L) / N) * phi;
    int updated_L = L + ((R - L) / N) * N;

    for(int i = updated_L; i <= R; i++){
        if (gcd(i, N) == 1)
            ans++;
    }

    ans %= mod;
    cout << ans << '\n';
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;

    while (T--) {
        solve();
    }


    return 0;
}
