#include "usefulheaders.h"

using namespace std;
void HelloWorldWriter::setToOne(int &i) {
	cout << "HelloWorldWriter::setToOne sets the given number to 1" << endl;
	i = 1;
}

void HelloWorldWriter::setToTwo(int &i) {
	cout << "HelloWorldWriter::setToTwo sets the given number to 2" << endl;
	i = 2;
}

void setToZero(int &i) {
	cout << "Independen Method setToZero sets the given number to zero" << endl;
	i = 0;
}