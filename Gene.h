#ifndef GENE_H
#define GENE_H
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Gene
{
  private:
	string geneName;
	string traitType;
	string alleleA;
	string alleleB;

  public:
	Gene();
	Gene(string alleleA, string alleleB);
};

#endif