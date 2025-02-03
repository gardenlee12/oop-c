#include <iostream>

using namespace std;

template <class T>
T getAverage(const T arr[], int n) {
    if (n <= 0) {
        // ���� ó��: �迭�� ũ�Ⱑ 0 ������ ���
        throw invalid_argument("�迭�� ũ��� 1 �̻��̾�� �մϴ�.");
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
        cout << "��� ��: " << averageValue << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "����: " << e.what() << endl;
    }

    return 0;
}
