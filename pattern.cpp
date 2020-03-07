/* Printing different patterns  */

#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<6;i++)
	{
		cout<<setfill('*')<<setw(i+1);
		cout<<" "<<endl;
	}

	return 0;
}
