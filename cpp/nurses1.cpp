#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv)
{
initscr();

printw("hello world");
int c = getch();

printw("%x", c);


refresh();

getch();

endwin();
return 0;
}
