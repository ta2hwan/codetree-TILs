#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
	string name;
	int kor;
	int eng;
	int math;

	Student() {};
	Student(string name, int kor, int eng, int math) {
		this->name = name;
		this->kor = kor;
		this->eng = eng;
		this->math = math;
	}

	void print() {
		cout << name << " " << kor << " " << eng << " " << math << '\n';
	}
};

bool cmp(Student a, Student b) {
	return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
	int n;
	string name;
	int kor, math, eng;
	cin >> n;

	Student* students = new Student[n];

	for (int i = 0; i < n; i++) {
		cin >> name >> kor >> eng >> math;
		students[i] = Student(name, kor, eng, math);
	}

	sort(students, students + n, cmp);

	for (int i = 0; i < n; i++) {
		students[i].print();
	}

	return 0;
}