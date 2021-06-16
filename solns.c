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
int factors(int n, int ar[])
{ 
    int k=0;
    int count=0;
    // Print the number of 2s that divide n 
    while (n%2 == 0) 
    { 
        ar[k] =2;
        k=k+1;
      count=count+1
        n = n/2; 
    } 
    
    // n must be odd at this point.  So we can skip  
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        // While i divides n, print i and divide n 
        while (n%i == 0) 
        { 
            ar[k] =i;
            k=k+1;
            count=count+1
            n = n/i; 
        } 
    } 
    
    // This condition is to handle the case when n  
    // is a prime number greater than 2 
    if (n > 2) 
      {
        ar[k] =n;
        count=count+1
      }
  
    return count;
} 
