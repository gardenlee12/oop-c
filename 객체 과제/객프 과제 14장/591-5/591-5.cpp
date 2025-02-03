#include <iostream>

using namespace std;

template <class T>
T getAverage(const T arr[], int n) {
    if (n <= 0) {
        // 예외 처리: 배열의 크기가 0 이하인 경우
        throw invalid_argument("배열의 크기는 1 이상이어야 합니다.");
    }

    T sum = arr[0];
    for (int i = 1; i < n; ++i) {
        sum += arr[i];
    }

    return sum / static_cast<T>(n);
}

int main() {
    try {
        double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
        int size = sizeof(list) / sizeof(list[0]);

        double averageValue = getAverage(list, size);
        cout << "평균 값: " << averageValue << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "오류: " << e.what() << endl;
    }

    return 0;
}
