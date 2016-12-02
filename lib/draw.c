#include "draw.h"
 

void draw(int diff)

{

 int i = 0;

 int j = 0;

 

#ifdef DEBUG

 system("cls");

 printf("/////////////////////지뢰수 : %03d개/////////////////////\n",diff); //56

 printf("Y/X01020304050607080910111213141516171819202122232425///\n");

 for(i=1;i<heigh+1;i+=1)

 {

  printf("%02d/",i);

  for(j=1;j<width+1;j+=1)

  {

   if(ntable[i][j]==1)

   {

    printf("◎ ");

   }

   else

   {

    switch(table[i][j])

    {

    case 0:

     printf("○ ");

     break;

    case 1:

     printf("● ");

     break;

    default:

     printf("ER");

    }

   }

  }

  printf("/%02d\n",i);

 }

 printf("Y/X01020304050607080910111213141516171819202122232425///\n");

 printf("////////////////////////////////////////////////////////\n"); //56

#else

 system("cls");

 printf("/////////////////////지뢰수 : %03d개/////////////////////\n",diff); //56

 printf("Y/X01020304050607080910111213141516171819202122232425///\n");

 for(i=1;i<heigh+1;i+=1)

 {

  printf("%02d/",i);

  for(j=1;j<width+1;j+=1)

  {

   if(ntable[i][j]==0)

   {

    printf("▦ ");

   }

   else

   {

    switch(minesum(i,j))

    {

    case 0:

     printf("○ ");

     break;

    case 1:

     printf("① ");

     break;

    case 2:

     printf("② ");

     break;

    case 3:

     printf("③ ");

     break;

    case 4:

     printf("④ ");

     break;

    case 5:

     printf("⑤ ");

     break;

    case 6:

     printf("⑥ ");

     break;

    case 7:

     printf("⑦ ");

     break;

    case 8:

     printf("⑧ ");

     break;

    default:

     printf("ER");

    }

   }

  }

  printf("/%02d\n",i);

 }

 printf("Y/X01020304050607080910111213141516171819202122232425///\n");

 printf("////////////////////////////////////////////////////////\n"); //56

#endif

 return;

}
