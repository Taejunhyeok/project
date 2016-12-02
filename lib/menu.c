#include "menu.h"

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

int menu()
{
 int check = 0;
 while(check == 0)
 {
  printf("찾을 지뢰의 수를 설정하세요.\n");
  printf("1.20개(EASY)\n");
  printf("2.50개(NORMAL)\n");
  printf("3.110개(HARD)\n");
  printf("4.230개(HELL)\n");
  printf("5.사용자 설정(최대 500, 판 사이즈 변경 불가\n");
  scanf("%d",&check);
  switch(check)
  {
  case 1:
   return 20;
   break;
  case 2:
   return 50;
   break;
  case 3:
   return 110;
   break;
  case 4:
   return 230;
   break;
  case 5:
   printf("지뢰 수는? ");
   scanf("%d",&check);
   return check;
   break;
  default:
   check = 0;
   printf("잘못된 선택입니다.\n");
   getch();
   break;
  }
 }
 return 1;
}
