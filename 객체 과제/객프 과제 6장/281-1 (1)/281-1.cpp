#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums;
	int num, count, max, min;

	cout << "������ ����:";
	cin >> count;

	for (int i = 0; i < count; i++) {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> num;
		nums.push_back(num);
	}
	max = nums.front();
	min = nums.front();

	for (auto& value : nums) {
		if (max < value)
			max = value;
		else if (min > value)
			min = value;
	}

	cout << "�ִ밪: " << max << endl;
	cout << "�ּҰ�: " << min << endl;
}