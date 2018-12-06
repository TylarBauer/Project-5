#ifndef ALLELE_H
#define ALLELE_H
#include <string>
#include <fstream>
using namespace std;

class Allele
{
  private:
	string nucleotideSequence;
	string variantName;
	string variantType;

  public:
	Allele();
	Allele(string nucleotideSequence, string variantName, string variantType);
};

#endif