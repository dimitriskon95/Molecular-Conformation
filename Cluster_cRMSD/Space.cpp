#include <fstream>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Space.h"

using namespace std;

Space::Space()
{
	cout << "A Space was constructed." << endl;
	cluster_number = 5;	//default

	//Not used
	hash_functions = 4;
	hash_tables = 5;
	clarans_franction = 250;
	clarans_iterations = 2;

	c_euclidean = NULL;
}

Space::~Space()
{
//delete c_euclidean;
	cout << "A Space was destructed." << endl;
}

void Space::Space_Menu(ifstream& infile1, ifstream& infile2,ifstream& cfile, ofstream& outfile, int k)
{
	int cluster_number = 5;
	Metric_Initialization(infile1);		//Construct all classes that we need for the chosen metric

	cout << "Number of clusters is " << k*5 << endl;
	cluster_number = k*5;
	c_euclidean = new ClusterEuclidean(cluster_number, item_dimensions, hash_functions, hash_tables, clarans_franction, clarans_iterations, numPoints, numConform);

	c_euclidean->ClusterEuclidean_Menu(infile2, cfile, outfile);

}


void Space::Metric_Initialization(std::ifstream& infile)
{
	cout << "Metric Initialization" << endl;
	char metric;
	string line;
	int line_count = 0, count = 0;
	char NumberConform[10];
	char NumberPoints[10];
	if (infile.is_open())
	{
			getline(infile, line);
			while(line[line_count] != '\0')
			{
				NumberConform[count] = line[line_count];
				count++;
				line_count++;
			}
			NumberConform[count] = '\0';
			this->numConform = atoi(NumberConform);		//clarans fraction (the least)

			count = 0;
			line_count = 0;
			getline(infile, line);
			while(line[line_count] != '\0')
			{
				NumberPoints[count] = line[line_count];
				count++;
				line_count++;
			}
			NumberPoints[count] = '\0';
			this->numPoints = atoi(NumberPoints);

			cout << "Conform : " << numConform << "     " << "points : " << numPoints << endl;
	}
}
