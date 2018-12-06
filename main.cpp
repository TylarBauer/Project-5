/*	Project:    Project #5
	Name:       Tylar Bauer
    Class:      CSC 1810 - Section 2
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Allele.h"
#include "Chromosome.h"
#include "Gene.h"
#include "GeneSequencer.h"

using namespace std;

int main(int argc, char *argv[])
{
	ofstream outToFile;
	ifstream inFromFile;
	string filename;
	int userChoice;
	bool runProgram = true;

	//Temporary code starts here
	string name;
	string trait;
	string alleleOneVariant;
	string alleleOneType;
	string alleleOneNucleotideSequence;
	string alleleTwoVariant;
	string alleleTwoType;
	string alleleTwoNucleotideSequence;
	string newGene;
	bool validInput;
	//End temp code

	while (runProgram)
	{
		cout << "          MENU" << endl;
		cout << "1 -- Create Chromosome" << endl;
		cout << "2 -- Analyze Chromosome" << endl;
		cout << "3 -- Output Chromosome to file" << endl;
		cout << "4 -- Input Chromosome from file" << endl;
		cout << "5 -- Combine Chromosomes" << endl;
		cout << "6 -- Exit" << endl;
		cout << endl;
		cout << "Please enter your choice (1-6)" << endl;
		cout << endl;

		cin >> userChoice;
		cin.clear();
		cin.ignore(1, '\n');
		cout << endl;

		switch (userChoice)
		{
		case 1:
			newGene = "Y";
			while (newGene == "Y")
			{
				validInput = false;
				cout << "What is the name of the new gene? (e.g. TZ458)" << endl;
				getline(cin, name);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the gene trait? (e.g. eye color)" << endl;
				getline(cin, trait);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 1 variant? (e.g. brown, blue, etc.)" << endl;
				getline(cin, alleleOneVariant);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 1 type? (e.g. dominant or recessive)" << endl;
				getline(cin, alleleOneType);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 1 nucleotide sequence? (e.g. AGTC)" << endl;
				getline(cin, alleleOneNucleotideSequence);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 2 variant? (e.g. brown, blue, etc.)" << endl;
				getline(cin, alleleTwoVariant);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 2 type? (e.g. dominant or recessive)" << endl;
				getline(cin, alleleTwoType);
				cin.clear();
				cin.ignore(1, '\n');
				cout << "What is the allele 2 nucleotide sequence? (e.g. AGTC)" << endl;
				getline(cin, alleleTwoNucleotideSequence);
				cin.clear();
				cin.ignore(1, '\n');
				while (validInput == false)
				{
					cout << "Would you like to add a new gene? (Y/N)" << endl;
					cin >> newGene;
					cin.clear();
					cin.ignore(0, '\n');
					if (newGene != "Y" && newGene != "N")
					{
						cout << "ERROR: INVALID INPUT" << endl;
						cout << "Please input \'Y\' or \'N\'" << endl;
						validInput = false;
					}
					else
					{
						validInput = true;
					}
				}
			}
			break;
		case 2:
			cout << "Name:					" << name << endl;
			cout << "Genetic trait:				" << trait << endl;
			if (alleleOneType == "dominant")
			{
				cout << "Expressed allele:			" << alleleOneVariant << "--" << alleleOneType << endl;
				cout << "Nucleotide sequence:			" << alleleOneNucleotideSequence << endl;
			}
			else if (alleleTwoType == "dominant")
			{
				cout << "Expressed allele:			" << alleleTwoVariant << "--" << alleleTwoType << endl;
				cout << "Nucleotide sequence:			" << alleleTwoNucleotideSequence << endl;
			}
			break;
		case 3: // TEST THIS BEFORE ADDING MORE CODE!!!!
			cout << "What file would you like to export to?" << endl;
			getline(cin, filename);
			cin.clear();
			cin.ignore(0, '\n');
			outToFile.open(filename);
			outToFile << name << ", " << trait << ", " << alleleOneVariant << ", " << alleleOneType << ", ";
			outToFile << alleleOneNucleotideSequence << ", " << alleleTwoVariant << ", " << alleleTwoType << ", ";
			outToFile << alleleTwoNucleotideSequence;
			outToFile.close();
			break;
		case 4:
			cout << "What file would you like to import the chromosome from?" << endl;
			getline(cin, filename);
			cin.clear();
			cin.ignore(0, '\n');
			inFromFile.open(filename);
			inFromFile >> name;
			inFromFile >> trait;
			inFromFile >> alleleOneVariant;
			inFromFile >> alleleOneType;
			inFromFile >> alleleOneNucleotideSequence;
			inFromFile >> alleleTwoVariant;
			inFromFile >> alleleTwoType;
			inFromFile >> alleleTwoNucleotideSequence;
			inFromFile.close();
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