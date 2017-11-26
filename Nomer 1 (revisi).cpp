#include <iostream>
using namespace std;

int whichnumber(int number[10], bool status)
{
	int greatest, smallest;
	for (int j=0;j<10;j++){
		if(j==0){
		greatest=number[0];
		smallest=number[0];
	}
	else if(number[j]>greatest){
		greatest=number[j];
	}
	else if(number[j]<smallest){
		smallest=number[j];
	}
	}
	if (status){
		return greatest;
	}
	else {
		return smallest;
	}
}

int main()
{
int number[10];	
for (int i=0;i<10;i++){
	cout<<"Input Number : ";
	cin>>number[i];
}
cout<<"Greatest = "<<whichnumber(number,true)<<endl;
cout<<"Smallest = "<<whichnumber(number,false);
}
