#include <stdio.h>

void swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
}

int main()
{
  int n, arr[50], flag = 0;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter %d elements: \n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
        flag = 1;
      }
    }
  }
  if (flag == 0)
  {
    printf("\nAlready sorted!\n");
  }
  printf("\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}