/*
  N ion solution for Eight Queens' Problem
  Copyright (c) 1999-2010 Rony B Chandran
  ----------------------------------------------------------
  website: www.ronybc.com 
\
 */

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define TROUBLE 1
#define SAFE 0

int check_front(int *q, int n);

int rnd(int n)
{
	return(random() % n);
}

void print_board_ncurse(int board_size, int *q, int iterations)
{
	int x, y;
	clear();
	for (x = 0; x < board_size; x++)
	{
		printw("\n");
		for (y = 0; y < board_size; y++)
		{
			if (q[x] == y) printw(" Q");
			else printw(" -");
		}
	}
	printw("\n");
	printw("\n  number of moves = %d   ", iterations);
	printw("\n  conflicts = ");
	for (x = 0; x < board_size; x++) printw("%d ", check_front(q, x));
	printw("\n  positions = ");
	for (x = 0; x < board_size; x++) printw("%d ", q[x] + 1);
	printw("\n\n\n");
	refresh();
	usleep(10000);
}

int check_front(int *q, int n)
{
	int a, b, c, x;
	a = q[n];
	b = a - n;
	c = a + n;
	for (x = 0; x < n; x++, b++, c--)
	{
		if (q[x] == a || q[x] == b || q[x] == c)
		{
			return(TROUBLE);
		}
	}
	return(SAFE);
}

int queen(int board_size, int *q, int n)
{
	static int iteration;
	int t, limit;
	if (n > board_size - 1) return(SAFE);
	limit = board_size * board_size;
	if (n == 0) iteration = 0;
	t = board_size;
	do
	{
		/* recursion */
		if (check_front(q, n) == SAFE)
		{
			if (queen(board_size, q, n + 1) == SAFE) return(SAFE);
		}
		/* move_vertical */
		if (++q[n] > board_size - 1) q[n] = 0;
		print_board_ncurse(board_size, q, ++iteration);
	}
	while (--t);
	return(TROUBLE);
}

int main(int argc, char **argv)
{
	int n;
	int board_size = 8;
	int *q;
	srandom(time(0));
	initscr();
	clear();
	if (argc > 1) board_size = atoi(argv[1]);
	if (board_size < 1) board_size = 8;
	q = malloc(board_size * sizeof(int));

	while (1)
	{
		for (n = 0; n < board_size; n++)
		{
			q[n] = rnd(board_size - 1);
		}

		print_board_ncurse(board_size, q, 0);
		printw("Hit any key to start... \n");
		refresh();
		getch();

		queen(board_size, q, 0);
		printw("Finished..! \n");
		refresh();
		getch();
	}
	return(SAFE);
}

