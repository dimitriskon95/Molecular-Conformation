#ifndef Space_H
#define Space_H

#include <fstream>
#include <sstream>
#include <string.h>
#include <iostream>
#include "ClusterEuclidean.h"

class Space
{
	private:
		char metric_space;
		int item_dimensions;
		int cluster_number;		//initialised by constructor

		int hash_functions;
		int hash_tables;
		int clarans_franction;
		int clarans_iterations;

		int numPoints;
		int numConform;

		int **array;

		ClusterEuclidean *c_euclidean;
	public:
		Space();
		~Space();

		void Space_Menu(std::ifstream& infile1, std::ifstream& infile2,std::ifstream& cfile, std::ofstream& outfile, int k, int r, int t);
		void Metric_Initialization(std::ifstream& infile);
};

#endif
