/* Enter your solutions in this file */
#include <stdio.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);

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
int min(int ar[], int count)
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

/*average of an array*/
float average(int ar[], int count)
{
  float sum =0;
  for (int i=0;i<count;i++)
  {
    sum=sum+ar[i];
  }
  float avg=(float)(sum/count);
  return avg;
}
  
