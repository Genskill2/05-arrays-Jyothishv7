/* Enter your solutions in this file */
#include <stdio.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);

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
  int lowest=ar[1];
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

/*mode*/
int mode(int a[], int n)
{
  int maxValue = 0, maxCount = 0, i, j;
  for (i = 0; i < n; ++i) 
  {
      int count = 0;
      for (j = 0; j < n; ++j)
      {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) 
      {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}
  
/*prime factors*/
int factors(int num, int ar[])
{
  int c=0,u=0;
  int a[num/2];
  int count=0;
  
  for(int i =2; i<num/2;i++)
  {
    if(num%i==0)
    {
      a[c]=i:
      c=c+1;
    }
  }
  for(int j=0;j<c;j++)
  { 
    int flag=0;
    int ele=a[j];
    for (int k=2;k<ele/2;k++)
    { 
      if (ele==2)
        flag=0;
      else if(ele%k==0)
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      ar[u]= ele;
      count=count+1;
      u=u+1;
    }
  }
  return count;
}
