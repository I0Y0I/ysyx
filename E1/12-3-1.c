#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

typedef struct point {
  int x, y;
} point;

point p;
int dic;

int maze[MAX_ROW][MAX_COL] = {
    0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0,
};

void print_maze() {
  int i, j;
  printf("+-----+\n");
  for (i = 0; i < MAX_ROW; i++) {
    printf("|");
    for (j = 0; j < MAX_COL; j++) {
      if (maze[i][j] == 0)
        printf(" ");
      else if (maze[i][j] == 1)
        printf("#");
      else if (maze[i][j] == 2)
        printf("*");
      else
        printf("x");
    }
    printf("|\n");
  }
  printf("+-----+\n");
}

int is_valid(point p) {
  if (p.x < 0 || p.x >= MAX_ROW)
    return 0;
  if (p.y < 0 || p.y >= MAX_COL)
    return 0;
  return maze[p.x][p.y] == 0;
}

int visit(dic)

int is_start(point p) { return p.x == 0 && p.y == 0; }

int is_end(point p) { return p.x == MAX_ROW && p.y == MAX_COL; }

int main(int argc, char *argv[]) {
  print_maze();
  // 0➡️, 1⬇️, 2⬅️, 3⬆️
  dic = 0;
  do {
    for (dic = 0; dic < 4; dic++) {
    }
  } while () return 0;
}
