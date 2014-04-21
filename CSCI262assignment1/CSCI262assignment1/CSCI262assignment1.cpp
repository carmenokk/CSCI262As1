// CSCI262assignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "md5.h"
using namespace std;

bool writeFile(string name, string text){
	ofstream outfile;
	outfile.open(name.c_str());
	if (outfile.is_open())
	{
		outfile << text;
		outfile.close();
		return true;
	}
	return false;
}

string readFile(string filename){
	string text;
	ifstream infile;
	infile.open(filename.c_str());
	if (infile.is_open())
	{
		string line;
		while (getline(infile, line))
		{
			text += line;
			text += '\n';
		}
		text.resize(text.length() - 1);
		infile.close();
	}
	else
		cout << "File not found." << endl;
	return text;
}

int main(int argc, char* argv[])
{
	return 0;
}

