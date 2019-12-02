#include <stdio.h> 
#include <stdlib.h> 
#include <gsl/gsl_statistics.h>
int main() 
{  
    double* ptr,mean, variance; 
    int n=100,i;
    ptr = (double*)malloc(n*sizeof(double)); 
    for (i = 0; i < n; i ++)
    {
        ptr[i]=(i+1)*(i+1);
    }
    mean     = gsl_stats_mean(ptr, 1, 100);
    variance = gsl_stats_variance(ptr, 1, 100);
    printf ("mean is %g\n", mean);
    printf ("variance is %g\n", variance);
    free(ptr);
    return 0;
}
