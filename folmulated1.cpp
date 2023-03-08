#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char nuk[20];
	int i,size,check=0;
	cout<<"Enter Text : ";
	cin>>num;
	
	size = strlen(num)
	
	for(i=0 ; i<size ; i++) {
		
		if(num[i]>='0' && num[i]<='9') {
			
		} else {
			check++;
		}
	}
	
	if(check==0) {
		cout<<"Enter String is Number";
	}else {
		cout<<"Enter String is Not Number";
     }
		
}
