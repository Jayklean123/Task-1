#include <iostream>

using namespace std;

long lrand() {
    return (static_cast<long>(rand()) << (sizeof(int) * 8)) |
           rand();

}

long long random_number(long long a, long long b) {
    long long x = lrand();
    return a + (x % (b - a));
}

int32_t main() {
    srand(time(0));

    long long T = random_number(1, 100);
    cout << T << '\n';


    for (int i = 0; i < T; i++) {
        long long N = random_number(2, 10000);
        long long L = random_number(1, 100000000000000000);
        long long R = random_number(L + 1, 1000000000000000000);
        cout << N << ' ' << L << ' ' << R << '\n';
    }
}

