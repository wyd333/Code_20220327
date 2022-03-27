#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int magic,guess;
	srand((unsigned)time(NULL));
	magic = rand()%51;
	
	cout << "please input a number:>";
	cin >> guess;
	
	while(guess != magic)
	{
		if(guess < magic){
			cout << "Too small!\nTry again please.   ";
		}else{
			cout << "Too large!\nTry again please.   ";
		}
		cin >> guess;
	}
	cout << "You got it!";
	
	
	return 0;
}
