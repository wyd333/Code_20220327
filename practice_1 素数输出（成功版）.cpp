#include<iostream>
using namespace std;

int main()
{
	int n;
	int end;
	int j;
	
	cout << "输出100~500之间的素数:" << endl;
	
	for(n=3;n<501;n++){
		end = n/2;
		for(j=2;j<=end;j++){
			if(n%j == 0){
				break;
			}
		}
		if(j>end){
			cout << n << endl;
		}
	}
	
	return 0;
}
