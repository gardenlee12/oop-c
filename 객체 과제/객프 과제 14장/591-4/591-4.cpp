#include <iostream>

using namespace std;

template <class T>
T getSmallest(T arr[], int n) {
    if (n <= 0) {
        // ���� ó��: �迭�� ũ�Ⱑ 0 ������ ���
        throw std::invalid_argument("�迭�� ũ��� 1 �̻��̾�� �մϴ�.");
    }

    T smallest = arr[0]; // �ʱⰪ�� �迭�� ù ��° ��ҷ� ����

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
        cout << "�ּҰ�: " << smallestValue << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "����: " << e.what() << endl;
    }

    return 0;
}
