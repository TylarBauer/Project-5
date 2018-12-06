#ifndef CHROMOSOME_H
#define CHROMOSOME_H
#include <string>
#include <fstream>
#include <vector>
#include "Gene.h"
using namespace std;

class Chromosome
{
  private:
	vector<Gene> genes;

  public:
	Chromosome();
};
#endif