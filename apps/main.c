#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int table[22][27] = {0};
int main ()
{
 short h = 0;
 short w = 0;
 int diff = 0;
A:
 diff = menu();
 reset(diff);
 while(1)
 {
  draw(diff);
  printf("다음 X(가로)좌표? ");
  scanf("%d",&w);
  printf("  다음 Y(세로)좌표? ");
  scanf("%d",&h);
  if(table[h][w]==1)
  {
   printf("지뢰를 밟았습니다! T-T\n");
   _getch();
   break;
  }
  else
  {
   trigger(h,w);
   printf("지뢰를 밟지 않았습니다! ^o^\n");
   printf("1초 후 자동으로 갱신됩니다.");
   Sleep(250);
   printf(".");
   Sleep(250);
   printf(".");
   Sleep(250);
   printf(".");
   Sleep(250);
  }
  if (checkend(diff)==1)
  {
   printf("축하합니다! 게임에서 이겼습니다!\n");
   _getch();
   break;
  }
 }
 diff=0;
 while(diff==0)
 {
  system("cls");
  printf("한번 더 하시려면 1. 아니면 2. ");
  scanf("%d",&diff);
  if(diff==1)
   goto A;
  else if(diff==2)
  {
   printf("종료합니다. ");
   exit(1);
  }
  else
  {
   diff = 0;
   printf("잘못된 선택입니다.\n");
   _getch();
  }
 }
 return 0;
}
