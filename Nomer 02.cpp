#include <iostream>
using namespace std;

int main()
{
	int n,angka[]={};
	bool status = false;
	
	cout<<"Masukkan nilai n : ";
	cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Angka ke-"<<i+1<<" ; ";
		cin>>angka[i];
	}
	for (int j=0;j<n;j++){
		if(angka[j]%2==0){
		status=true;
		cout<<"Angka genap : "<<angka[j]<<endl;
	}
	}
	if(!status){
		cout<<"Tidak ada bilangan genap.";
	}
}
