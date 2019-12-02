#include"header.h"

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
