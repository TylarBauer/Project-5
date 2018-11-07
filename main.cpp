/*	Project:    Project #5
	Name:       Tylar Bauer
    Class:      CSC 1810 - Section 2
*/

#include <iostream>
#include <fstream>
#include "Allele.h"
#include "Chromosome.h"
#include "Gene.h"
#include "GeneSequencer.h"

using namespace std;

int main(int argc, char *argv[])
{
	int userChoice;
	bool runProgram = true;

	while (runProgram)
	{
		cout << "          MENU" << endl;
		cout << "1 -- Create Chromosome" << endl;
		cout << "2 -- Analyze Chromosome" << endl;
		cout << "3 -- Output Chromosome to file" << endl;
		cout << "4 -- Input Chromosome from file" << endl;
		cout << "5 -- Combine Chromosomes" << endl;
		cout << "6 -- Exit" << endl;

		cin >> userChoice;
		cin.clear();
		cin.ignore(1, '\n');

		switch (userChoice)
		{
		case 1:
			cout << "FIXME: Write program for choice 1: Create Chromosome." << endl;
			break;
		case 2:
			cout << "FIXME: Write program for choice 2: Analyze Chromosome." << endl;
			break;
		case 3:
			cout << "FIXME: Write program for choice 3: Output Chromosome to file." << endl;
			break;
		case 4:
			cout << "FIXME: Write program for choice 4: Input Chromosome from file." << endl;
			break;
		case 5:
			cout << "FIXME: Write program for choice 5: Combine Chromosomes." << endl;
			break;
		case 6:
			cout << "Thank you, goodbye. (Hit Enter to exit)" << endl;
			runProgram = false;
			break;
		default:
			cout << "ERROR: Invalid entry. Try again." << endl;
			runProgram = true;
			break;
		}
		cout << endl;
	}

	return 0;
}