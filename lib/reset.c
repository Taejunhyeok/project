#include <time.h>

int width = 25;
int heigh = 20;
int table[22][27] = {0};
int ntable[22][27] = {0};
void reset(int diff)
{
 int i = 0;
 int j = 0;
 int H = 0;
 int W = 0;
 int minecount = 0;
 srand((unsigned)time(NULL));
 for(i=0;i<heigh+2;i+=1)
 {
  for(j=0;j<width+2;j+=1)
  {
   table[i][j]=0;
  }
 }
 for(i=0;i<heigh+2;i+=1)
 {
  for(j=0;j<width+2;j+=1)
  {
   ntable[i][j]=0;
  }
 }
 for(i=0;i<22;i+=1)
 {
  ntable[i][0] = 1;
  ntable[i][26] = 1;
 }
 for(j=0;j<27;j+=1)
 {
  ntable[0][j] = 1;
  ntable[21][j] = 1;
 }
 while(minecount<diff)
 {
  H = 1+rand()%20;
  W = 1+rand()%25;
  if(table[H][W]==0)
  {
   table[H][W]=1;
   minecount+=1;
  }
 }
 return;
}

