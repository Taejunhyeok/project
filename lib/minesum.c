#include "minesum.c"



int minesum(int i, int j)
{
 int sum = 0;
 sum += table[i-1][j-1];
 sum += table[i-1][j];
 sum += table[i-1][j+1];
 sum += table[i][j-1];
 sum += table[i][j+1];
 sum += table[i+1][j-1];
 sum += table[i+1][j];
 sum += table[i+1][j+1];
 return sum;
}
