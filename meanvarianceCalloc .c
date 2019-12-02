#include<stdio.h>
#include<stdlib.h>
void MeanVariance(float *input,float output[],int size)
{
  float sum=0,variance;
  int i;
   
 
  for (i = 0; i < size; i ++)
  {
    sum += input[i];
  }
  output[0]=sum/size;
  sum=0;
  for (i = 0; i < size; i ++)
  {
    sum += (input[i])*(input[i]);
    
  }
  
  output[1]= sum/size - output[0]*output[0];
   
}
int main() 
{ 
    float* ptr; 
    int n=100,i; 
    ptr = (float*)calloc(n , sizeof(float)); 
    for (i = 0; i < n; i ++)
    {
        printf("values before assignment %d %f",i,ptr[i]);
        ptr[i]=(i+1)*(i+1);
    }
    float mv[2];
    MeanVariance(ptr,mv,n);
    printf("mean and variance are \n %f \n %f\n", mv[0],mv[1]);
    free(ptr);
    return 0;  
}
