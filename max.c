#include <stdio.h>

int max(const int vc[], int no)
{
  int i;
  int max = vc[0];
  for (i=1; i<no; i++)
    if (vc[i] > max)
      max = vc[i];
  return max;
}

int main(void)
{
  int vc[5] = {1,2,8,4,5};
  printf("%d\n", max(vc, 5));
  return (0);
}

#include <stdio.h>

int max(const int *vc, int no)
{
  int i;
  int max = *vc;
  for (i=1; i<no; i++)
    if (*(vc+i) > max)
      max = *(vc+i);
  return max;
}

int main(void)
{
  int vc[5] = {1,2,8,4,5};
  printf("%d\n", max(vc, 5));
  return (0);
}