//#include "std_lib_facilities.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open(){ char ch; cin >> ch; }

int test_vector();
void test_find();

//template<typename T>
//void user(vector<T>& v, list<T>& lst){
//	for (vector<T>::iterator p = v.begin(); p != v.end(); ++p) cout << *p << '\n';
//
//	list<T>::iterator q = find(lst.begin(), lst.end(), T{ 42 });
//}

void test_sizeof(){
	//1
	cout << sizeof(bool) << endl;
	//4
	cout << sizeof(int) << endl;
	
	vector<int> v(1000); v.push_back(11);
	cout << "size of v(100) is: " << sizeof(v) << endl;

}

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
	***/

	
	test_find();

	keep_window_open();
	return 0;
}

int test_vector(){
	vector<string> v = {"Kant", "Plato", "Hume", "Kierkegaard" };
	vector<string> v2(4);

	for (int i = 0; i < v.size(); i++)
	{
		//cout << v[i] << endl;
		v2.push_back(v[i]);
	}

	//print v2
	for (int i = 0; i < v2.size(); i++) { cout << v2[i] << endl; }
	
	return 1;
}

void readinPush(){
	vector<double> tmps;
	for (double t; cin >> t;)
		tmps.push_back(t);

	double sum = 0;
	//TODO: this for each loop is fancy
	for (int x : tmps) sum += x;
	cout << "average values is: " << sum / tmps.size() << "\n";
	//sort
	
	sort(tmps.begin(), tmps.end());
	cout << "Median value is: " << sum / tmps.size() << "\n";
}


int test_const(int v){
	//have to know at compile time.
	//not depent on any input etc.
	//const c = v + 3;
	return 0;
}

void test_find(){
	vector<int> v = { 1, 2, 4, 51, 111, 98 };
	//find
	auto r1 = find(v.begin(), v.end(), 33);
	
	if (r1 != v.end()){
		//cout << r1 << endl;
	}
	//find if
	
	//count


	//merge

	//equal

	//accumulate

	//inner_product


}