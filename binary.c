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
    ptr = (float*)malloc(n * sizeof(float)); 
    for (i = 0; i < n; i ++)
    {
        ptr[i]=(i+1)*(i+1);
    }
    float mv[2];
    MeanVariance(ptr,mv,n);
    FILE *file; 
    file = fopen("text.bin", "w") ; 
    fprintf(file, "%f \n %f\n", mv[0],mv[1]);
    fclose(file);   
    free(ptr);
    return 0;  
}
