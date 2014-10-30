//#include "std_lib_facilities.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open(){ char ch; cin >> ch; }

int test_vector();

int main (){
	/***
	cout << "Hi, Please type your name here:";
	
	string first_name;
	//read left into right
	cin >> first_name;
	//write right into left
	cout << "Hello, " << first_name << "!\n";

	//bool
	bool tap_on = true;
	***/

	double x = 2.7;
	int y = x;
	cout << y << endl;

	char c1 = 'a';
	int ic1 = c1;
	cout << ic1 << endl;

	//const
	//TODO: c++98 don't have constexpr
	const double pi = 3.1415926;
	//pi = 8;

	test_vector();

	keep_window_open();
	return 0;
}

int test_vector(){
	vector<string> v = {"Kant", "Plato", "Hume", "Kierkegaard" };

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 1;
}

int test_const(int v){
	//have to know at compile time.
	//not depent on any input etc.
	//const c = v + 3;
	return 0;
}