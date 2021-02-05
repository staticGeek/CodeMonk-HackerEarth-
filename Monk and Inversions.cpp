// Question:

// Monk's best friend Micro, who happen to be an awesome programmer, got him an integer matrix M of size N * N for his birth day. Monk is taking coding classes from Micro.
// They have just completed array inversions and Monk was successful in writing a program to count the number of inversions in an array.
// Now, Micro has asked Monk to find out the number of inversion in the matrix M.
// Number of inversions, in a matrix is defined as the number of unordered pairs of cells {(i,j), (p,q)} such that M[i][j] > M[p][q] & i <= j & j <= q.
// Monk is facing a little trouble with this task and since you did not got him any birthday gift, you need to help him with this task.

// Input:
// First line consists of a single integer T denoting the number of test cases.
// First line of each test case consists of one integer denoting N. Following N lines consists of N space
// separated integers denoting the matrix M.

// Output:
// Print the required array.

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 20
// 1 <= M[i][j] <= 1000

// Sample Input:
// 2
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 2
// 4 3
// 1 4

// Sample Output:
// 0
// 2

// Explanation:

// In first test case there is no pair of cells (x1, y1), (x2, y2), x1 <= x2 & y1 <= y2 having M[x1][y1] > M[x2][y2], so the answer is 0.
// In second test case M[1][1] > M[1][2] and M[1][1] > M[2][1], so the answer is 2.

// Time Limit: 1.0 sec(s) for each input file
// Memory Limit: 256 MB
// Source Limit: 1024 KB

//        ===============================================================================================================================================

// Answer:

#include <iostream>
#define endl '\n'

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while(T--)
	{
		int answer=0;
		int N;
		cin >> N;
		int arr[N][N];
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				int element;
				cin >> arr[i][j];
			}
		}

		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				for (int k = i; k < N; k++) 
				{
					for (int l = j; l < N; l++) 
					{
						if (arr[i][j] > arr[k][l]) answer++;
					}
				}	
			}
		}

		cout << answer << endl;
	}
	
	return 0;
}