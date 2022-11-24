#include "set.h"
int main() {
	set<int, size_t>* s = new set<int, size_t>();
	cout << ">> insert: 10, 9, 8, 7, 6" << endl;
	s->insert(10, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(9, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(8, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(7, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(6, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> insert: 6 (중복되는 숫자)" << endl;
	s->insert(6, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> count 6: " << s->count(6) << endl;
	cout << ">> count 3 (미입력 숫자): " << s->count(1) << endl;
	cout << ">> insert: 5, 4, 3, 2, 1" << endl;
	s->insert(5, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(4, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(3, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(2, s);
	s->print(s, 1);
	cout << endl << endl;
	s->insert(1, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> insert: 1 (중복되는 숫자)" << endl;
	s->insert(1, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> count 1: " << s->count(1) << endl;

	cout << ">> erase: 10, 9, 8" << endl;
	s->erase(10, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(9, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(8, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> erase: 100 (미입력 숫자)" << endl;
	s->erase(100, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> erase: 7, 6, 5, 4" << endl;
	s->erase(7, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(6, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(5, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(4, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> erase: 5 (미입력 숫자)" << endl;
	s->erase(5, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << ">> erase: 3, 2, 1" << endl;
	s->erase(3, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(2, s);
	s->print(s, 1);
	cout << endl << endl;
	s->erase(1, s);
	s->print(s, 1);
	cout << endl << endl;
	cout << "end" << endl;

	return 0;
}