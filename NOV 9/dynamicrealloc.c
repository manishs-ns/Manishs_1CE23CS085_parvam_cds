#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n;
     printf("Enter the no. of elements:\n");
     scanf("%d", &n);
     int *dynamic = (int *)malloc(n * sizeof(int));
     printf("Enter the values:\n");
     for (int i = 0; i < n; i++)
     {
          scanf("%d", &dynamic[i]);
     }
     int extra;
     printf("Enter the no. of extra elements:\n");
     scanf("%d", &extra);
     dynamic = realloc(dynamic, (n + extra));
     printf("Enter the extra elements:\n");
     for (int i = n; i < (n + extra); i++)
     {
          scanf("%d", &dynamic[i]);
     }
     printf("after allocation:");
     for (int i = 0; i < (n + extra); i++)
     {
          printf("%d ",dynamic[i]);
     }
}