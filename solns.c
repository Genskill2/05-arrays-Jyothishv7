/* Enter your solutions in this file */
#include <stdio.h>

int max(int [], int);
int min(int [], int);

/*highest num in array*/
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

/*lowest num in array*/
int max(int ar[], int count)
{
  int lowest=-1;
  for (int i=0;i<count;i++)
  {
    if(ar[i]<lowest)
    {
      lowest=ar[i];
    }
  }
  return lowest;
}
