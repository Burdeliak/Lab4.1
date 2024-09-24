#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    int N;
    cout << " N: ";
    cin >> N;

    // 1) 
    double sum1 = 0;
    int i = 1;
    while (i <= N) {
        sum1 += (1.0 / i) + sqrt(1 + pow(sin(i), 2));
        i++;
    }

    // 2) 
    double sum2 = 0;
    i = 1;
    do {
        sum2 += (1.0 / i) + sqrt(1 + pow(sin(i), 2));
        i++;
    } while (i <= N);

    // 3) 
    double sum3 = 0;
    for (int i = 1; i <= N; i++) {
        sum3 += (1.0 / i) + sqrt(1 + pow(sin(i), 2));
    }

    // 4) 
    double sum4 = 0;
    for (int i = N; i >= 1; i--) {
        sum4 += (1.0 / i) + sqrt(1 + pow(sin(i), 2));
    }

    // 
    cout << "Result while: " << sum1 << endl;
    cout << "Result do-while: " << sum2 << endl;
    cout << "Result for (n++): " << sum3 << endl;
    cout << "Result for (n--): " << sum4 << endl;

    return 0;
}