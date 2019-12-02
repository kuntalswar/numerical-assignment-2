
#include"header.h"
int main() 
{ 
    float* ptr; 
    int n=100,i; 
    ptr = (float*)calloc(n , sizeof(float)); 
    for (i = 0; i < n; i ++)
    {
        ptr[i]=(i+1)*(i+1);
    }
    float mv[2];
    MeanVariance(ptr,mv,n);
    FILE *file; 
    file = fopen("text.txt", "w") ; 
    fprintf(file, "%f \n %f\n", mv[0],mv[1]);
    fclose(file);   
    free(ptr);
    return 0;  
}
