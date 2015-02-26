//WSQ06

#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;
int main()
{
	int random, x, cont=1
	strand (time(NULL));
	random = 1 + rand ()%100;

	cout<<"give a number between 1 and 100 " <<endl;
	cout<<"enter a number:" <<endl;
	cin>>x;

	while (x!=random)
	{
		count++;
		if(x<random)
		{
			cout<<"number is low, put it again: " <<endl;
			cin>>x;
		}
		else
		{
			cout<<"number is high, put it again: "<< endl;
			cin>>x;
		}
	}

	cout<<"the number is: "<<x<<". guess tooks" <<cont<< "tries "<<endl;
	return 0;
}