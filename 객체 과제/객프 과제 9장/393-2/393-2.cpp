#include <iostream>

using namespace std;

class Line {
	int* ptr;
public:
	int getLength(void);
	Line(int len);
	Line(const Line &other);
	~Line();

};
Line::Line(int len) {
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;
}
Line::Line(const Line& other) {
	cout << "���� ������" << endl;
	this->ptr = new int;
	*ptr = *other.ptr;
}
int Line::getLength()
{
	return *ptr;
}
Line::~Line() {
	delete ptr;
}
void main() {
	Line L1(10);
	Line clone(L1);

	cout << "�Ϲ� ������ ���� ���� : " << L1.getLength() << endl;
	cout << "���� �������� ���� ���� : " << clone.getLength() << endl;
}