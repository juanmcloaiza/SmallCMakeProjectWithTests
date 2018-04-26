#include <iostream>
#include <chrono>
#include <thread>
#include "usefulheaders.h"

using namespace std;

int main() {
	HelloWorldWriter p;
	int x = 4;

	this_thread::sleep_for(std::chrono::seconds(1));
	cout << "Hello World" << endl;

	this_thread::sleep_for(std::chrono::seconds(1));
	cout << " x = " << x << endl;

	this_thread::sleep_for(std::chrono::seconds(2));
	setToZero(x);
	cout << " x = " << x << endl;

	this_thread::sleep_for(std::chrono::seconds(2));
	p.setToOne(x);
	cout << " x = " << x << endl;

	this_thread::sleep_for(std::chrono::seconds(2));
	p.setToTwo(x);
	cout << " x = " << x << endl;

	this_thread::sleep_for(std::chrono::seconds(2));
	cout << "Good Bye World" << endl;
}