#include<iostream>
using namespace std;
int main()
{
	double e,t;
	int i=1,mul=1;
	int n;
	
	cin >> n;
	while(i<n){
		i++;
		mul=mul*i;
		t=1.0/mul;
	}
	for(int j=1;j<=n;j++){
		e=t+e;
	}
	cout << e << endl;
	
	return 0;
}
