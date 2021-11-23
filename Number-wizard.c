
#include <stdio.h>

int main()
{
  char player1[80], player2[80];
  int n = 21, p = 0;

  printf("Enter the name of player1 \n");
  scanf("%s", player1);
  printf("Enter the name of player2 \n");
  scanf("%s", player2);
  int i;

  while (n >= 1)
  {
    printf("%s Enter the player1 :", player1);
    scanf("%d", &p);
    while (p>5 || p<=0)
    {
      printf("wrong number\n");
      printf("Please enter the number again");
      scanf("%d", &p);
    }

    n = n - p;
    if (n <= 0)
    {
      printf("%s wins", player1);
      break;
    }
    printf("remaining number=%d", n);
    printf("\n%s Enter the player2 :", player2);
    scanf("%d", &p);
    while (p>5 || p<=0)
    {
      printf("wrong number\n");
      printf("Please enter the number again");
      scanf("%d", &p);
    }
    n = n - p;
    if (n <= 0)
    {
      printf("%s wins", player2);
      break;
    }
    printf("remaining number=%d", n);
  }
}
