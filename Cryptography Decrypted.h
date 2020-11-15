#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void cryptography_decrypted(){
	
	ifstream input_file;
	input_file.open("Cryptography Encrypted.txt");
	
	ofstream output_file;
	output_file.open("Cryptography Decrypted.txt");
	
	
	string message; int i;
	
	input_file>>message;
	cout<<"Message : "<<message;
	
	for(i = 0; message[i] != '\0'; i++){
		message[i] = message[i] - 2;
	}
	
	cout<<endl<<endl;
    cout << "Decrypted Cryptography : " << message << endl;
    output_file<<message;
    
}
