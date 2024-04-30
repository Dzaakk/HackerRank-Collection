int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int diagonalA = 0, diagonalB = 0, result = 0;
    for (int i = 0; i < arr_rows; i++)
    {
        diagonalA += arr[i][i];
        diagonalB += arr[i][arr_rows - i - 1];
    }
    result = abs(diagonalA - diagonalB);
    return result;
}
