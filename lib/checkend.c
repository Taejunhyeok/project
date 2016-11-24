int width = 25;
int heigh = 20;
int ntable[22][27] = {0};
int checkend(int diff)
{
 int i = 0;
 int j = 0;
 int sumend = 0;
 for(i=1;i<heigh+1;i+=1)
 {
  for(j=1;j<width+1;j+=1)
  {
   sumend += ntable[i][j];
  }
 }
 if((500-diff)==sumend)
  return 1;
 else return 0;
}


