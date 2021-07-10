#include <unistd.h>

void put_char(char *c)
{
  write(1, c, 1);
}

void rush00(int x_max, int y_max)
{
  int x, y;

  x_max += 2;
  y_max += 2;
  x = y = 0;
  while(y++, y < y_max)
  {
    while(x++, x < x_max)
    {
      if ((x == 1 && y == 1) || (x == x_max && y == y_max))
      {
        put_char("/");
      }
      if ((x == 1 && y == y_max) || (x == x_max && y == 1))
      {
        put_char("B");
      }
      if ((x == 1 && y != y_max) || (x != x_max && y == 1))
      {
        put_char("*");
      }
      else
      {
        put_char("A");
      }
    }
    put_char("\n");
    x = 0;
  }
}

int main(void)
{
  rush00(4, 6);
}
