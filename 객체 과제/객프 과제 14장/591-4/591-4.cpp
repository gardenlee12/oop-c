#include <iostream>

using namespace std;

template <class T>
T getSmallest(T arr[], int n) {
    if (n <= 0) {
        // 예외 처리: 배열의 크기가 0 이하인 경우
        throw std::invalid_argument("배열의 크기는 1 이상이어야 합니다.");
    }

    T smallest = arr[0]; // 초기값을 배열의 첫 번째 요소로 설정

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main() {
    try {
        double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
        int size = sizeof(list) / sizeof(list[0]);

        double smallestValue = getSmallest(list, size);
        cout << "최소값: " << smallestValue << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "오류: " << e.what() << endl;
    }

    return 0;
}
