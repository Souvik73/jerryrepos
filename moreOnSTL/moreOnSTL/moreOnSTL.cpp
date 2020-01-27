
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

bool f(int x, int y) 
{
	return x > y;
}

void vectorDemo()
{
	vector<int> arr = { 11, 2, 3, 14, 100, 100, 100, 100};
	arr.push_back(123);
	sort(arr.begin(), arr.end());								//sorts the array
	bool present = binary_search(arr.begin(), arr.end(), 3);	//performs binary search
	cout << present << endl;

	vector<int>::iterator it = lower_bound(arr.begin(), arr.end(), 100);	 //>= 
	vector<int>::iterator it2 = upper_bound(arr.begin(), arr.end(), 100);	 //>
	cout << *it << " " << *it2 << endl;
	cout << it2 - it << endl;

	sort(arr.begin(), arr.end(), f);
	vector<int>::iterator it3;
	for (it3 = arr.begin(); it3 != arr.end(); it3++)
	{
		cout << *it3 << " ";
	}
	cout << endl;
	//alternative way to display the contents of the vector
	for (int x : arr)											//for(int &x:arr) for reference for which values in vector will change if we change x
	{
		cout << x << " ";
	}
	cout << endl;
}

void setDemo()
{
	set<int> s;			// set automatically sorts when elements are inserted in it
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	for (int x : s)
	{
		cout << x << " ";
	}
	cout << endl;

	auto it = s.find(-1);
	if (it == s.end())
	{
		cout << "element not present" << endl;
	}
	else
	{
		cout << "present" << endl;
		cout << *it << endl;
	}
	auto it2 = s.lower_bound(-1);
	auto it3 = s.upper_bound(-1);
	auto it4 = s.upper_bound(2);
	cout << *it2 << " " << *it3 << " " <<*it4 << endl;

}

void mapDemo()
{
	map<int, int> A;
	A[1] = 100; A[2] = -1; A[3] = 200;

	map<char, int> cnt;
	string x = "souvik banerjee";
	for (char c : x) {
		cnt[c]++;
	}
	cout << cnt['a'] << " " << cnt['e'] << endl;

}

int main()
{
	
	mapDemo();

}
