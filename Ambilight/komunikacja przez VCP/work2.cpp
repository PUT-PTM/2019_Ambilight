// work2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <exception>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SerialPort.h"
#include <string>

using namespace std;

//String for getting the output from STM
char output[MAX_DATA_LENGTH];

/*Portname must contain these backslashes, and remember to
replace the following com port*/
char *port_name =(char*) "\\\\.\\COM20";

//String for incoming data
char incomingData[MAX_DATA_LENGTH];

int main()
{
	SerialPort STM(port_name);
	if (STM.isConnected()) cout << "Connection Established" << endl;
	else cout << "ERROR, check port name";

	while (STM.isConnected()) {
		cout << "czytam kolory: \n";
		std::string input_string;
		input_string = "111"; // tutaj podpinamy wartosci RGB
		//Creating a c string
		char *c_string = new char[input_string.size() + 1];
		//copying the std::string to c string
		std::copy(input_string.begin(), input_string.end(), c_string);
		//Adding the delimiter
		c_string[input_string.size()] = '\n';
		//Writing string to STM
		STM.writeSerialPort(c_string, MAX_DATA_LENGTH);
		//Getting reply from STM
		//STM.readSerialPort(output, MAX_DATA_LENGTH);
		//printing the output
		//puts(output);
		//freeing c_string memory
		delete[] c_string;
	}
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
