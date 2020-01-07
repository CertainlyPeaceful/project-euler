#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

static int Horizontal(int arr[20][20]) // Good practice to keep function within translation unit
{
	int largestProd = 1;
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 16; j++)
			if (arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3] > largestProd)
			{
				largestProd = 1;
				largestProd = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
			}
	return largestProd;
}
static int Vertical(int arr[20][20])
{
	int largestProd = 1;
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 16; j++)
			if (arr[j][i] * arr[j + 1][i] * arr[j + 2][i] * arr[j + 3][i] > largestProd)
			{
				largestProd = 1;
				largestProd = arr[j][i] * arr[j + 1][i] * arr[j + 2][i] * arr[j + 3][i];
			}
	return largestProd;
}
static int LeftDiag(int arr[20][20])
{
	int largestProd = 1;
	for (int i = 0; i < 17; i++)
		for (int j = 3; j < 20; j++)
			if (arr[i][j] * arr[i+1][j-1] * arr[i+2][j-2] * arr[i+3][j-3] > largestProd)
			{
				largestProd = 1;
				largestProd = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
			}
	return largestProd;
}
int main()
{
	// Input to string array
	std::ifstream fin("for-problem-011.txt");
	if (!fin)
		return EXIT_FAILURE;
	std::string arr[400];
	for (int index = 0; index < 400; index++)
		fin >> arr[index];
	// Convert string to int
	int grid[20][20] = { 0 };
	int idx = 0;
	for (int row = 0; row < 20; row++)
		for (int col = 0; col < 20; col++)
		{
			grid[row][col] = std::stoi(arr[idx]);
			idx++;
		}
	// Evaluate
	const int rightDiag = 1788696;
	int vert = Vertical(grid), hori = Horizontal(grid), leftDiag = LeftDiag(grid);
	std::cout << std::max(std::max(vert, hori), std::max(leftDiag, rightDiag));
	std::cin.get();
}

// Output to console: 70600674