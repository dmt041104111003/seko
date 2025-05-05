#include <iostream>
#include <fstream>
using namespace std;

long long haBac(long long a, long long m, long long n) {
    if (m == 0) return 1;
    else if (m % 2 == 0) {
        long long tmp = haBac(a, m / 2, n);
        return (tmp * tmp) % n;
    } else {
        return (a * haBac(a, m - 1, n)) % n;
    }
}

int main() {
	long long a, m, n, ketQua;
    ifstream tep("input.txt");
    if (!tep.is_open()) {
        cout << "Khong the mo file input.txt!" << endl;
        return 1;
    }
    tep >> a >> m >> n;
    tep.close();
    ketQua = haBac(a, m, n);
    cout << "Ket qua " << a << "^" << m << " mod " << n << " la: " << ketQua << endl;
    return 0;
}

