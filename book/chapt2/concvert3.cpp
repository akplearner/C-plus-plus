#include <iostream>
using namespace std;

int main(){

	double ctemp;
//Prompt and input value of ctemp.
	cout<<"Input a Celsius temp and press ENTER: ";
	cin>>ctemp;
//Convert ctemp and output results.
	cout<<"Fahr. temp is: "<< (ctemp*1.8)+32;
	cout<<endl;

	return 0;

}
