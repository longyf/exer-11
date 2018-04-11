#ifndef search_h
#define search_h
#include <iostream>
#include <stdexcept>
using namespace std;

template <class T>
T search2(T num[], int begin, int end) {
	for (int i=begin; i!=end-1; ++i) {
		if (num[i]>num[i+1]) return num[i+1];
	}
	//如果所有的元素都是一样的。
	return num[begin];
}

template <class T>
T search(T num[], int length) {
	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input array.");
	if (length==1)
		return num[0];

	int begin=0;
	int end=length-1;
	int middle=0;

	while (num[begin]>=num[end]) {
		if (end-begin==1) {
			return num[end];
		}

		middle=(begin+end)>>1;

		//如果三个元素相同，就只能采用传统的方法了。
		if (num[middle]==num[begin]&&num[middle]==num[end])
			return search2(num, begin, end);

		if (num[middle]>=num[begin]) {
			//中间元素在前一个子数组。
			begin=middle;
		}
		else {
            //中间元素在后一个子数组。
            end=middle;
		}
	}
	return num[middle];
}
#endif		
