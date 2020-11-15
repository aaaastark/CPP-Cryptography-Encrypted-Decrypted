#include <iostream>
#include <fstream>
#include <string>
#include "Cryptography Encrypted.h"
#include "Cryptography Decrypted.h"
using namespace std;

void initialize();

int main(){
	initialize();
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	switch(number){
		case 1:
			cout<<endl<<endl;
			cryptography_encrypted();
			exit(2);
			break;
		case 2:
			cout<<endl<<endl;
			cryptography_decrypted();
			exit(2);
			break;
	}	
}
void initialize(){
	cout<<"-------------------------------------\n";
	cout<<"1:	Cryptography Encrypted      |\n";
	cout<<"2:	Cryptography Decrypted      |\n";
	cout<<"-------------------------------------";
	cout<<endl<<endl;
}
