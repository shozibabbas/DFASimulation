#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

bool gotoFuncTask11();
bool switchFuncTask12();
bool gotoFuncTask21();
bool switchFuncTask22();

void main(void) {
	//gotoFuncTask11();
	gotoFuncTask21();
	/*while (true) {
		switchFuncTask12();
	}*/
	/*while (true) {
		switchFuncTask22();
	}*/
}

bool gotoFuncTask11() {
START:
	string input = "";
	cout << "Enter string: ";
	getline(cin, input);
	for (int a = 0; a < input.length(); a++) {
		if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
			continue;
		else {
			cout << "String not recognized" << endl;
			system("pause");
			system("cls");
			goto START;
		}
	}
	int i = 0;
	goto S1;


S1:
	if (input[i] == 'a')
		goto S2;
	else
		goto TRAP;
S2:
	i++;
	if (input[i] == 'b')
		goto S3;
	else
		goto TRAP;
S3:
	i++;
	if (input[i] == 'b')
		goto S2;
	else if (input[i] == 'c')
		goto S4;
	else
		goto TRAP;
TRAP:
	cout << "String rejected" << endl;
	system("pause");
	system("cls");
	goto START;
S4:
	i++;
	if (input[i] != NULL)
		goto TRAP;
	cout << "String accepted" << endl;
	system("pause");
	system("cls");
	goto START;
}

bool switchFuncTask12() {
	string input = "";
	cout << "Enter string: ";
	getline(cin, input);
	for (int a = 0; a < input.length(); a++) {
		if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
			continue;
		else {
			cout << "String not recognized" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	int i = 0;
	int cn = 1;

	while (true) {
		switch (cn) {
		case 0:
			cout << "String rejected" << endl;
			system("pause");
			system("cls");
			return false;
			break;
		case 1:
			if (input[i] == 'a')
				cn = 2;
			else
				cn = 0;
			break;
		case 2:
			if (input[i] == 'b')
				cn = 3;
			else
				cn = 0;
			break;
		case 3:
			if (input[i] == 'b')
				cn = 2;
			else if (input[i] == 'c')
				cn = 4;
			else
				cn = 0;
			break;
		case 4:
			if (input[i] != NULL)
				cn = 0;
			cout << "String accepted" << endl;
			system("pause");
			system("cls");
			return true;
		}
		i++;
	}
}

bool gotoFuncTask21() {
START:
	string input = "";
	cout << "Enter string: ";
	getline(cin, input);
	for (int a = 0; a < input.length(); a++) {
		if (input[a] == 'a' || input[a] == 'b')
			continue;
		else {
			cout << "String not recognized" << endl;
			system("pause");
			system("cls");
			goto START;
		}
	}
	int i = -1;
	goto EE;

EE:
	i++;
	if (input[i] == NULL) {
		cout << "String accepted" << endl;
		system("pause");
		system("cls");
		goto START;
	}
	else if (input[i] == 'a')
		goto OE;
	else if (input[i] == 'b')
		goto EO;
	else
		goto TRAP;

OE:
	i++;
	if (input[i] == 'a')
		goto EE;
	else if (input[i] == 'b')
		goto OO;
	else
		goto TRAP;

EO:
	if (input[i] == 'a')
		goto OO;
	else if (input[i] == 'b')
		goto EE;
	else
		goto TRAP;

OO:
	if (input[i] == 'a')
		goto EO;
	else if (input[i] == 'b')
		goto OE;
	else
		goto TRAP;

TRAP:
	cout << "String rejected" << endl;
	system("pause");
	system("cls");
	goto START;
}

bool switchFuncTask22() {
	string input = "";
	cout << "Enter string: ";
	getline(cin, input);
	for (int a = 0; a < input.length(); a++) {
		if (input[a] == 'a' || input[a] == 'b' || input[a] == 'c')
			continue;
		else {
			cout << "String not recognized" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	int i = 0;
	int cn = 1;

	while (true) {
		switch (cn) {
		case 0:
			cout << "String rejected" << endl;
			system("pause");
			system("cls");
			return false;
			break;
		case 1:
			if (input[i] == NULL) {
				cout << "String accepted" << endl;
				system("pause");
				system("cls");
				return true;
			}
			else if (input[i] == 'a')
				cn = 2;
			else if (input[i] == 'b')
				cn = 3;
			else
				cn = 0;
			break;
		case 2:
			if (input[i] == 'a')
				cn = 1;
			else if (input[i] == 'b')
				cn = 4;
			else
				cn = 0;
			break;
		case 3:
			if (input[i] == 'a')
				cn = 4;
			else if (input[i] == 'b')
				cn = 1;
			else
				cn = 0;
			break;
		case 4:
			if (input[i] == 'a')
				cn = 3;
			else if (input[i] == 'b')
				cn = 2;
			else
				cn = 0;
			break;
		}
		i++;
	}
}