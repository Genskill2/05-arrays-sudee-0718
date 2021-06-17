/* Enter your solutions in this file */
#include <stdio.h>

// test_max
int max(int z[],int n){
	int i;
	int N = z[0];
	for(i=1;i<n;i++)
	{
		if(N<z[i])
		{
			N=z[i];
		}
		else
		{
			N = N; 
		}
	}
	return N;
}

// test_min

int min(int z[],int n){
	int i;
	int N = z[0];
	for(i=1;i<n;i++)
	{
		if(N>z[i])
		{
			N=z[i];
		}
		else
		{
			N = N; 
		}
	}
	return N;
}

// test_average 
float average(int z[], int n)
{
	float avg,sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=z[i];
	}
	
	avg = sum /n; 
	/*printf("%f %f\n",sum,avg);*/
	return avg;
}

// test_mode
int mode(int z[],int n) {
   int maxvalue = 0, maxcount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (z[j] == z[i])
         ++count;
      }
      
      if (count > maxcount) {
         maxcount = count;
         maxvalue = z[i];
      }
   }
	/*printf("%d %d\n",maxcount, maxvalue);*/
   return maxvalue;
}

// test_factors
int factors(int n , int  ret[])
{
	int count = 0;
	//Print the 2 s that divide n
	while (n%2 == 0)

    {

        //printf("%d\n ", 2);
        ret[count]= 2;
        count++;
        n = n/2;

    }
   // printf("*%d\n",count);

    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)

    for (int i = 3; i <= sqrt(n); i = i+2)

    {

        // While i divides n, print i and divide n

        while (n%i == 0)
        {
            //printf("%d \n", i);
            ret[count]= i;
            count++;
            n = n/i;
        }

    }
 	//printf("#%d\n",count);

    // This condition is to handle the case when n 

    // is a prime number greater than 2

    if (n > 2){
	 //printf ("%d \n", n);
	  ret[count] = n;
	 count++;
	 }
	//printf("%d\n",count);
	/* for(int j=0;j<count;j++)
	{
	printf("%d\t",ret[j]);
	}
	printf("\n"); */
	return count;
}

