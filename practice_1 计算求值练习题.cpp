#include<iostream>
using namespace std;

int main()
{
	
//	Çó1-2+3-4+5-6+¡­+99-100µÄÖµ 
//	1+3+5+7+...+97+99
//	2+4+6+8+...+98+100
	
	int esum;
	esum=0;
	for(int i=1;i<=99;){
		esum += i;
		i = i+2;
	}
	
	int osum;
	osum=0;
	for(int j=2;j<=100;){
		osum -= j;
		j = j+2;
	}
	
	int sum;
	sum = esum+osum;
	cout << sum << endl;

	return 0;
}
