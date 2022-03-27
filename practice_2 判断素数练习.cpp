#include<iostream>
using namespace std;
//ÅĞ¶ÏËØÊıÁ·Ï°

int main()
{	
	int n,i;
	int end;
	cout << "please input a number:    ";
	cin >> n;
	end = n/2;
	for(i=2;i<=end;i++){
		if(n%i == 0){
		break;
		}
	}
	
	if(i < end){
		cout << n << "is not a prime";
	}else{
		cout << n << "is a prime";
	}
	return 0;
}
