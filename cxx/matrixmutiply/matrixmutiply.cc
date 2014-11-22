#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "../../utils/makematrix.cc"

using namespace std;

void readMatrix(string filename, vector< vector<int> > &ma, vector< vector<int> > &mb)
{
	string line;
	FILE* fp = freopen(filename.c_str(), "r", stdin);
	int i = 0, j, a;
	while (getline(cin, line) && !line.empty())
	{
		istringstream iss(line);
		j = 0;

		while (1)
		{
			if (iss.eof()) break;
			else if (!isdigit(iss.peek()))
			{
				iss.ignore();	// or iss.get() to move the pointer forward
				continue;
			}

			iss >> a;
			ma[i][j] = a;
			j++;
		}
		i++;
	}

	i = 0;

	while (getline(cin, line))
	{
		if (line.empty()) continue;
		if (cin.eof()) break;

		istringstream iss(line);
		j = 0;
		while (1)
		{
			if (iss.eof()) break;
			else if (!isdigit(iss.peek()))
			{
				iss.ignore();	// or iss.get() to move the pointer forward
				continue;
			}

			iss >> a;
			mb[i][j] = a;
			j++;
		}
		i++;
	}

	fclose(fp);
}

void ikjMatrixMutiply(vector< vector<int> > &ma, vector< vector<int> > &mb, vector< vector<int> > &mc, int size)
{
	int i, k, j;
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				mc[i][j] += ma[i][k] * mb[k][j];
			}
		}
	}
}

int main(int argc, char* argv[])
{
	string filename;
	int matrixSize = 2;
	vector< int > inner(matrixSize);
	vector< vector<int> > aMatrix(matrixSize, inner);
	vector< vector<int> > bMatrix(matrixSize, inner);
	vector< vector<int> > cMatrix(matrixSize, inner);

	filename = makeMatrixBySize(matrixSize);
	readMatrix(filename, aMatrix, bMatrix);

	ikjMatrixMutiply(aMatrix, bMatrix, cMatrix, matrixSize);

	filename = makeMatrixByMatrix(cMatrix, matrixSize, "out");

	cout << "Matrix is stored in " << filename << endl;
	return(0);
}