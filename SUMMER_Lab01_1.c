#include <stdio.h>
#include <string.h>

char pos[8][4] = { "R", "L", "B", "T", "RT", "LT", "RB", "LB" };
int king_x, king_y;
int stone_x, stone_y;

int check(char next[]) {
    int i;

    for (i = 0; i < 8; i++) {
        if (strcmp(pos[i], next) == 0) {
            return i;
        }
    }

    return -1;
}

void move(char next[]) {
    switch (check(next)) {
    case 0:
        if (king_x + 1 < 8) {
            king_x++;
            if (king_x == stone_x && king_y == stone_y) {
                if (stone_x + 1 < 8) {
                    stone_x++;
                }
                else {
                    king_x--;
                }
            }
        }
        break;
    case 1:
        if (king_x - 1 >= 0) {
            king_x--;
            if (king_x == stone_x && king_y == stone_y) {
                if (stone_x - 1 >= 0) {
                    stone_x--;
                }
                else {
                    king_x++;
                }
            }
        }
        break;
    case 2:
        if (king_y - 1 >= 0) {
            king_y--;
            if (king_x == stone_x && king_y == stone_y) {
                if (stone_y - 1 >= 0) {
                    stone_y--;
                }
                else {
                    king_y++;
                }
            }
        }
        break;
    case 3:
        if (king_y + 1 < 8) {
            king_y++;
            if (king_x == stone_x && king_y == stone_y) {
                if (stone_y + 1 < 8) {
                    stone_y++;
                }
                else {
                    king_y--;
                }
            }
        }
        break;
    case 4:
        if (king_y + 1 < 8) {
            if (king_x + 1 < 8) {
                king_x++;
                king_y++;

                if (king_x == stone_x && king_y == stone_y) {
                    if (stone_y + 1 < 8 && stone_x + 1 < 8) {
                        stone_x++;
                        stone_y++;
                    }
                    else {
                        king_x--;
                        king_y--;
                    }
                }
            }
        }
        break;
    case 5:
        if (king_y + 1 < 8) {
            if (king_x - 1 >= 0) {
                king_x--;
                king_y++;

                if (king_x == stone_x && king_y == stone_y) {
                    if (stone_y + 1 < 8 && stone_x - 1 >= 0) {
                        stone_x--;
                        stone_y++;
                    }
                    else {
                        king_x++;
                        king_y--;
                    }
                }
            }
        }
        break;
    case 6:
        if (king_y - 1 >= 0) {
            if (king_x + 1 < 8) {
                king_x++;
                king_y--;

                if (king_x == stone_x && king_y == stone_y) {
                    if (stone_y - 1 >= 0 && stone_x + 1 < 8) {
                        stone_x++;
                        stone_y--;
                    }
                    else {
                        king_x--;
                        king_y++;
                    }
                }
            }
        }
        break;
    case 7:
        if (king_y - 1 >= 0) {
            if (king_x - 1 >= 0) {
                king_x--;
                king_y--;

                if (king_x == stone_x && king_y == stone_y) {
                    if (stone_y - 1 >= 0 && stone_x - 1 >= 0) {
                        stone_x--;
                        stone_y--;
                    }
                    else {
                        king_x++;
                        king_y++;
                    }
                }
            }
        }
        break;
    }
}

int main()
{
    int n;
    int i;

    char initpos[3];
    char next[4];

    scanf("%s", initpos);

    king_x = initpos[0] - 'A';
    king_y = initpos[1] - '1';

    scanf("%s", initpos);

    stone_x = initpos[0] - 'A';
    stone_y = initpos[1] - '1';

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", next);

        move(next);
    }

    printf("%c%c\n%c%c\n", king_x + 'A', king_y + '1', stone_x + 'A', stone_y + '1');

    return 0;
}