#include<stdio.h>
int main()
{
    static void Geek(int[,] matrix, int n, int m);
    {
        // Outer loop for rows
        for (int i = 0; i < n; i++)
        {
            // Inner loop for columns
            for (int j = 0; j < m; j++)
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                {
                    continue;
                }
                else
                {
                    // If it is not a boundary element.
                    Console.Write(matrix[i, j] + " ");
                }
            }
            Console.WriteLine();
        }
    }
    // Driver code
    public static void Main(string[] args)
    {
        // Define a 4x4 matrix
        int[,] matrix = {
            { 8, 9, 0, 1 },
            { 2, 3, 6, 8 },
            { 3, 2, 5, 3 },
            { 2, 7, 5, 4 }
        };
        // Function call
        Geek(matrix, 4, 4);
    }
}
