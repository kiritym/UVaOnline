#include<iostream>
#include<string>

using namespace std;

char valueForLetter(char letter){
	switch (letter){
		case 'A': case 'B': case 'C': return '2';
		case 'D': case 'E': case 'F': return '3';
		case 'G': case 'H': case 'I': return '4';
		case 'J': case 'K': case 'L': return '5';
		case 'M': case 'N': case 'O': return '6';
		case 'P': case 'Q': case 'R': case 'S': return '7';
		case 'T': case 'U': case 'V': return '8';
		case 'W': case 'X': case 'Y': case 'Z': return '9';
		default:  return letter;

	}
}


string findTheTelephoneNumber(string exp){
	
	for(int i = 0; i < exp.length(); i++){
		exp[i] = valueForLetter(exp[i]);
	}
	return exp;
}

int main(int argc, char *argv[]){
	
	while(!cin.eof()){
		string s;
		getline(cin, s);
		//cout << "expression is: " << s << endl;
		cout << findTheTelephoneNumber(s) << endl;
	};

	return 0;
}
