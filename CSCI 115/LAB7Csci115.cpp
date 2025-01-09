#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cctype>
using namespace std;

const int MAX = 20;

string words[MAX];
int count[MAX];
int counter = 0;

string Format(string entry)
{
	int size = entry.length();

	for (int chr = 0; chr < size; chr++)
	{
		if (isdigit(entry[chr]))
			entry[chr] = ' ';
		if (isupper(entry[chr]))
			entry[chr] = tolower(entry[chr]);
		if (ispunct(entry[chr]))
			entry[chr] = ' ';
	}
	return entry;
}

void WordCounter(string word)
{
	for (int i = 0; i < counter; i++)
		if (word == words[i])
			count[i]++;
	words[counter] = word;
	count[counter] = 1;
	counter++;
}

int main(int argc, char* argv[])
{

	ifstream Input("RomeoAndJuliet.txt");
	string word, word2;


	if (!Input)
		cout << "There is something wrong with the file!" << endl;

	while (Input >> word)
	{
		word2 = Format(word);
		WordCounter(word2);
	}

	for (int i = 0; i < counter; i++)
		cout << words[i] << " " << count[i] << endl;


	return 0;
}
