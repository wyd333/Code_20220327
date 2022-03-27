#include<iostream>
using namespace std;

int main()
{
	int n;
	int i,end;
	cout << "please input a number,and I'll tell if it is a prime" << endl;
	cin >> n;
	end = n/2;
	for(i=2;i<=end;i++){
		if(n%i == 0){
			break;
		}
	}
	if(i > end){
		cout << "it is a prime." << endl;
	}else{
		cout << "not a prime"<< endl;
	}
	
	
	return 0;
}
