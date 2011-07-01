#include <stdlib.h>
#include <stdio.h>

// echo lambda | xargs -I % gcc -Wall -fnested-functions %.c -o % && ./lambda

/* Create a lambda function.  Note: unlike lambdas in functional
   languages, this lambda does not capture the containing
   environment.  Thus, if you access the enclosing environment, you
   must ensure that the lifetime of this lambda is bound by the
   lifetime of the enclosing environment (i.e., until the enclosing
   function returns).  This means that if you access local
   variables, bad things will happen.  If you don't access local
   variables, you're fine.  */
#define lambda(l_ret_type, l_arguments, l_body)         \
  ({                                                    \
    l_ret_type l_anonymous_functions_name l_arguments   \
      l_body                                            \
    &l_anonymous_functions_name;                        \
  })

int
main (int argc, char *argv[])
{
  int array[] = { 4, 3, 1, 2, 5 };

  void dump (void)
  {
    int i;
    for (i = 0; i < sizeof (array) / sizeof (array[0]); i ++)
      printf ("%d ", array[i]);
    printf ("\n");
  }

  printf ("Initial: ");
  dump ();

  /* Ensure that the lambda is a nested function and thus requires a
     trampoline.  */
  int comparison = 0;

  qsort (array, sizeof (array) / sizeof (array[0]), sizeof (array[0]),
         lambda (int, (const void *a, const void *b),
                 {
                   dump ();
                   printf ("Comparison %d: %d and %d\n",
                           ++ comparison, *(const int *) a, *(const int *) b);
                   return *(const int *) a - *(const int *) b;
                 }));

  printf ("Sorted: ");
  dump ();

  return 0;
}
