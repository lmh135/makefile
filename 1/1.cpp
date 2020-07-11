#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int sum=0;
int main()
{
	cout<<sum<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	a=3;
	b=4;
	a_fun();
	b_fun();
	return 0;
}
