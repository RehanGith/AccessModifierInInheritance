#include <iostream>
using namespace std;

class Base {
private:
	int a{};
protected:
	int b{};
public:
	int c{};
	void display() {
		cout << a << " " << b << " " << c << endl;
	}

};
class PublicDerived : public Base {
	// a : private
	// b : protected
	// c : public
	// void display() : public
public:
	int d{};
	void display() {
		Base::display();
		cout << d << endl;
	}
};



int main() {
	Base obj;
	//obj.a = 10; // compiler error because it is private
//	obj.b = 10; // compiler error it's protected
	obj.c = 10; // Ok it's public
	obj.display();

	PublicDerived obj2;

}