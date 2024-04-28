#include <climits>
int formingMagicSquare(int s_rows, int s_columns, int **s)
{
    int magicSquares[8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};

    int min_cost = INT_MAX;

    for (int k = 0; k < 8; k++)
    {
        int cost = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cost += abs(s[i][j] - magicSquares[k][i][j]);
            }
        }
        if (cost < min_cost)
        {
            min_cost = cost;
        }
    }
    return min_cost;
}
