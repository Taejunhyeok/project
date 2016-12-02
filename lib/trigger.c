#include "trigger.h"

 

 

void trigger(int h, int w)

{

  ntable[h][w] = 1;

 

 if(minesum(h,w)==0)

 {

  if((ntable[h-1][w-1]==0) && (table[h-1][w-1]==0))

   trigger(h-1,w-1);

  if((ntable[h-1][w]==0) && (table[h-1][w]==0))

   trigger(h-1,w);

  if((ntable[h-1][w+1]==0) && (table[h-1][w+1]==0))

   trigger(h-1,w+1);

  if((ntable[h][w-1]==0) && (table[h][w-1]==0))

   trigger(h,w-1);

  if((ntable[h][w+1]==0) && (table[h][w+1]==0))

   trigger(h,w+1);

  if((ntable[h+1][w-1]==0) && (table[h+1][w-1]==0))

   trigger(h+1,w-1);

  if((ntable[h+1][w]==0) && (table[h+1][w]==0))

   trigger(h+1,w);

  if((ntable[h+1][w+1]==0) && (table[h+1][w+1]==0))

   trigger(h+1,w+1);

 }

 return;

}
