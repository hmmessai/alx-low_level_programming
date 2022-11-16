#include "3-calc.h"

/**
 *main - 
 *@argc: the argument count
 *@argv: the arguments used
 *Return: 0
 */

int main(unsigned int argc, char *argv)
{
  int a, b;
  int (*operation)(int, int);

  if (argc != 4)
    {
      printf("Error\n");
      exit(98);
    }

  if (argv[2] == NULL || argv[2][1] != '\0')
    {
      printf("Error\n");
      exit(99);
    }

  a = atoi(argv[1]);
  b = atoi(argv[3]);

  operation = get_op_func(argv[2]);

  if (operation == NULL)
    {
      printf("Error\n");
      exit(99);
    }
  
  printf("%d\n", operation(a,b));
  return (0);
}
