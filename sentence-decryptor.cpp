#include<iostream>
using namespace std;
int main()
{
	//variable declaration
	long long int num;
	char a,c,e,g,i,k;
	long long int b,d,f,h,j,l;
	
	//as we need code to decode it so user will enter the code
	
	cout<<"Enter the Code: ";
	cin>>num;
	
	//we need to separate the letter to decode it
	
	a=num/1000000000000000;						//separates first 2 numbers and store in character to get its ASCII
	
	b=num/100000000000000;						
	b=b%10;										//separates first letter for roll number and store in interget value
	c=(num/1000000000000)%100;					//separates next 2 numbers and store in character to get its ASCII
	d=num/100000000000;
	d=d%10;										//separates next letter for roll number and store in interget value
	e=(num/1000000000)%100;						//separates next 2 numbers and store in character to get its ASCII
	f=num/100000000;
	f=f%10;										//separates next letter for roll number and store in interget value
	g=(num/1000000)%100;						//separates next 2 numbers and store in character to get its ASCII
	h=num/100000;
	h=h%10;										//separates next letter for roll number and store in interget value
	i=(num/1000)%100;							//separates next 2 numbers and store in character to get its ASCII
	j=(num/100)%10;								//separates next letter for roll number and store in interget value
	k=num%100;									//separates last 2 numbers and store in character to get its ASCII
	

	cout<<a<<c<<e<<g<<i<<k<<endl;				//Prints the String
	cout<<b<<d<<f<<h<<endl;						//prints the roll number
}