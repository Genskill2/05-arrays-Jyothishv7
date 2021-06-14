/* Enter your solutions in this file */
#include <stdio.h>
#include <cs50.h>

int max(int [], int);

int max(int ar[], int count)
{
  int highest=0;
  for (int i=0;i<count;i++)
  {
    if(ar[i]>highest)
    {
      highest=ar[i];
    }
  }
  return highest;
}
