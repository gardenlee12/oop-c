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
	cout << "일반 생성자" << endl;
	ptr = new int;
	*ptr = len;
}
Line::Line(const Line& other) {
	cout << "복사 생성자" << endl;
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

	cout << "일반 생성자 선의 길이 : " << L1.getLength() << endl;
	cout << "복사 생성자의 선의 길이 : " << clone.getLength() << endl;
}