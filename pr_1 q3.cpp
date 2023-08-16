#include<iostream>
using namespace std;

class Time{
	public:
		int hr;
		int min;
		int sec;
	    int total;
};

int main()
{
	Time t1;
	
	cout << "Enter total seconds : ";
	cin >> t1.total;
	
	t1.hr = t1.total/3600;
    t1.total = t1.total%3600;
	t1.min = t1.total/60;
	t1.total = t1.total%60;
	t1.sec = t1.total;
	
	cout << "HH:MM:SS format : "<< endl;
	cout << t1.hr << ":" << t1.min << ":" << t1.sec;
	
	return 0;
}  
