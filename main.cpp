#include <iostream>
#include "search.h"
using namespace std;
void test1() {
	const int length=10;
	int array[length]={2,2,4,5,5,7,8,9,10,1};
	cout<<search(array, length)<<endl;
}

void test2() {
    const int length=10;
    int array[length]={4,5,6,7,8,10,10,1,2,3};
	cout<<search(array, length)<<endl;
}

void test3() {
    const int length=10;
    int array[length]={10,1,2,3,4,5,6,7,8,9};
	cout<<search(array, length)<<endl;
}

void test4() {
    const int length=10;
    int array[length]={1,1,1,1,1,1,1,1,1,1};
	cout<<search(array, length)<<endl;
}

void test5() {
    const int length=10;
    int *array=nullptr;
	cout<<search(array, length)<<endl;
}

void test6() {
    const int length=5;
    int array[length]={1,1,0,1,1};
	cout<<search(array, length)<<endl;
}

void test7() {
    const int length=5;
    int array[length]={1,0,1,1,1};
    cout<<search(array, length)<<endl;
}

void test8() {
    const int length=5;
    int array[length]={1,2,3,4,5};
    cout<<search(array, length)<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	try {
		test5();
	}
	catch (invalid_argument e) {
		cout<<"Test 5."<<endl;
		cout<<e.what()<<endl;
	}
	test6();
	test7();
	test8();
	return 0;
}
