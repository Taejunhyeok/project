#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <termio.h>
#include <unistd.h>

int width = 25;
int heigh = 20;
int table[22][27] = {0};
int ntable[22][27] = {0};


int getch(void)
{
    int ch;

    struct termios old;
    struct termios new;

    tcgetattr(0, &old);

    new = old;
    new.c_lflag &= ~(ICANON|ECHO);
    new.c_cc[VMIN] = 1;
    new.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &new);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &old);

    return ch;
}

int main ()
{
 int h = 0;
 int w = 0;
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
   getch();
   break;
  }
  else
  {
   trigger(h,w);
   printf("지뢰를 밟지 않았습니다! ^o^\n");
   printf("1초 후 자동으로 갱신됩니다.\n");
   sleep(0.25);
   printf(".");
   sleep(0.25);
   printf(".");
   sleep(0.25);
   printf(".");
   sleep(0.25);
  }
  if (checkend(diff)==1)
  {
   printf("축하합니다! 게임에서 이겼습니다!\n");
   getch();
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
   getch();
  }
 }
 return 0;
}
