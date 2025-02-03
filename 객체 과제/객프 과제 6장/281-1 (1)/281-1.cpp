#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums;
	int num, count, max, min;

	cout << "정수의 개수:";
	cin >> count;

	for (int i = 0; i < count; i++) {
		cout << "정수를 입력하시오: ";
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

	cout << "최대값: " << max << endl;
	cout << "최소값: " << min << endl;
}