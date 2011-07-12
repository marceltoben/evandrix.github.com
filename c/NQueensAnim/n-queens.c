/*
  N ion solution for Eight Queens' Problem
  Copyright (GPL) 1999-2010 Rony B Chandran
  ----------------------------------------------------------
  website: www.ronybc.com
\
 */

#include <stdio.h>
#include <stdlib.h>

#define TROUBLE 1
#define SAFE 0

int rnd(int n)
{
	return(random() % n);
}

void print_board_stdout(int *q, int bsize)
{
	int n;
	for (n = 0; n < bsize; n++)
	{
		printf("%d, ", q[n] + 1);
	}
	printf("\n");
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

int queen(int *q, int n, int bsize, int limit)
{
	static int iteration = 0;
	int t = bsize;
	if (n > bsize - 1) return(SAFE);
	if (n == 0) iteration = 0;
	do
	{
		/* recursion */
		if (check_front(q, n) == SAFE)
		{
			if (queen(q, n + 1, bsize, limit) == SAFE) return(SAFE);
		}
		/* move_vertical */
		if (++q[n] == bsize) q[n] = 0;
	}
	/* iteration limit is optional */
	while (--t && ++iteration < limit);
	return(TROUBLE);
}

int main(int argc, char **argv)
{
	int n, bsize = 8;
	int *q;
	srandom(time(0));
	if (argc > 1) bsize = atoi(argv[1]);
	if (bsize < 1) bsize = 8;
	q = malloc(bsize * sizeof(int));
	while (1)
	{
		for (n = 0; n < bsize; n++)
		{
			q[n] = rnd(bsize - 1);
		}

		if (queen(q, 0, bsize, bsize * bsize) == SAFE)
		{
			print_board_stdout(q, bsize);
		}
		else /* optional; used when iteration limit enabled */
		{
			putchar('-');
		}
	}
	return(1);
}

