#include<iostream>

using namespace std;

class sum {

private :

	int no1;
	int no2;

public :

	void setFirstNo1(int n1);
	int getFirstNo1();
	void setSecondNo2(int n2);
	int getSecondNo2();
	int display();
};

void sum::setFirstNo1(int n1) {

	no1 = n1;

}

int sum::getFirstNo1() {

	return no1;
}

void sum::setSecondNo2(int n2) {

	no2 = n2;
}

int sum::getSecondNo2() {

	return no2;
}

int sum::display()
{
	return no1 + no2;
}

int main()
{

	sum s;

	int num1, num2;

	cout << "Enter the number 1 :";
	cin >> num1;

	cout << "Enter the number 2 :";
	cin >> num2;

	s.setFirstNo1(num1);
	s.setSecondNo2(num2);

	cout << "The number 1 is :" << s.getFirstNo1() << endl;
	cout << "The number 2 is :" << s.getSecondNo2() << endl;
	cout << "The sum of two number is :" << s.display() << endl;


	return 0;
}
