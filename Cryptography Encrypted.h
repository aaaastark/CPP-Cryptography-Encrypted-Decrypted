#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void cryptography_encrypted(){
	
	ofstream output_file;
	output_file.open("Cryptography Encrypted.txt");
	
	
	string message; int i;
	cout<<"Enter Message to Encrypted : ";
	cin>>message;
	
	
	for(i = 0; message[i] != '\0'; i++){
		message[i] = message[i] + 2;
	}
	
	cout<<endl<<endl;
    cout << "Encrypted Cryptography : " << message << endl;
    output_file<<message;
    
}
