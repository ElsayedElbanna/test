#include <iostream>
using namespace std ;
int main ()
{	int odd=0, even=0, x=0;
	for (int i=0; i<6; i++)
		{
			cin >> x;
			if(x%2)
			{
				++even;
				continue;
			}
			++odd;
			
		}
	cout<<"Even: "<<even<<"  Odd: "<< odd<<endl;	

	return 0;
}