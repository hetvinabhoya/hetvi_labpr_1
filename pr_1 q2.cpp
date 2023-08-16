#include<iostream>
using namespace std;
class Time{
	public:  
	int hr;
	int min;
	int sec;
	
};

int main()
{
	Time t1,t2,t3;
	
	cout << "Enter 1st Hour : ";
	cin >> t1.hr;
	cout << "Enter 1st Minute : ";
	cin >> t1.min;
	cout << "Enter 1st Second : ";
	cin >> t1.sec;
	cout << "Enter 2nd Hour : ";
	cin >> t2.hr;
	cout << "Enter 2nd Minute : ";
	cin >> t2.min;
	cout << "Enter 2nd Second : ";
	cin >> t2.sec;
	
	t3.sec = t1.sec + t2.sec;
	t3.min = t1.min + t2.min + (t3.sec/60);
	 
	t3.hr = t1.hr + t2.hr + (t3.min/60);
	t3.min %= 60;
	t3.sec %= 60;
	
	
	cout << t3.hr << ":" << t3.min << ":" << t3.sec ;
	
	return 0;
	
}
