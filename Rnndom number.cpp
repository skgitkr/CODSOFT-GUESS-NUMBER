#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	
	int random =rand()%100+20;
	int guess=0;
	int moves=0;
	do
	{
		moves++;
		cout<<"Enter your guess:";
		cin>>guess;
		if(guess==random)
			cout<<"Congrats! You gussed right "<<"after "<<moves<<" moves. "<< endl;
		else if(guess<random)
			cout<<"Wrong guess! You entered a lower number"<<endl;
		else
			cout<<"Wrong guess! You entered a higher number"<<endl;	
	}
	while(guess!=random);
	return 0;
}
