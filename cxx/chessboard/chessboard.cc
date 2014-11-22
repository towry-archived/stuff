#include <iostream>
#include <vector>

using namespace std;

static int tile;

void initializeChessboard(vector< vector<int> > &cb, int dr, int dc)
{
	// mark the special spot as -1
	cb[dr][dc] = 0;
}

void printChessboard(const vector< vector<int> > cb)
{
	int size = cb.size();
	int i, j;

	tile += 1;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			cout << cb[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void chessboard(vector< vector<int> > &cb, int tr, int tc, int dr, int dc, int size)
{
	if (size == 1) return; // return if there left 1 spot.

	int t = tile++,
		s = size / 2;

	// left top
	if (dr < tr + s && dc < tc + s)
	{
		chessboard(cb, tr, tc, dr, dc, s);
	} 
	else 
	{
		// IMPORTANT!!!!
		// becuase the real special square is not 
		// in this sub chessboard, so we fake one.
		// right bottom as fake special square(why?
		// draw a sample and go to see why!)
		cb[tr + s - 1][tc + s - 1] = t;
		// now we have a fake special square, use it!
		chessboard(cb, tr, tc, tr + s - 1, tc + s -1, s);
	}

		// right top
	if (dr < tr + s -1 && dc >= tc + s -1)
	{
		chessboard(cb, tr, tc + s -1, dr, dc, s);
	}
	else 
	{
		// left bottom
		cb[tr + s - 1][tc + s] = t;
		chessboard(cb, tr, tc + s, tr + s - 1, tc + s, s);
	}

	// left bottom
	if (dr >= tr + s  && dc < tc + s)
	{
		chessboard(cb, tr + s, tc, dr, dc, s);
	}
	else 
	{	
		// right top
		cb[tr + s][tc + s - 1] = t;
		// fill other

		chessboard(cb, tr + s, tc, tr + s, tc + s - 1, s);
	}


	// right bottom
	if (dr >= tr + s && dc >= tc + s)
	{
		chessboard(cb, tr + s, tc + s, dr, dc, s);
	}
	else 
	{
		// left top
		cb[tr + s][tc + s] = t;
		chessboard(cb, tr + s, tc + s, tr + s, tc + s, s);
	}
}

int main() 
{
	int size = 4;
	int dc, dr, tc, tr;

	vector<int> inner(size);
	vector< vector<int> > orignalCb(size, inner);		// 4*4 (pow(2, k) * pow(2, k), k = 2) matrix for chessboard
	// there is a special spot on the board, and have (pow(4, 2) - 1)/3 L shape blocks.
	// we need use the blocks to cover the whole chessboard except the special spot.

	dc = 0;  // col for special spot
	dr = 0;  // row for special spot
	tile = 0;

	initializeChessboard(orignalCb, dr, dc);

	chessboard(orignalCb, 0, 0, dr, dc, size);

	printChessboard(orignalCb);
}

// almost done!