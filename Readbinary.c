#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	FILE *file;
  if ((file=fopen("text.bin","rb"))==NULL)
  {
  	printf("file not found\n");
  }
  float a;
  int n;
  for(n = 0; n < 2; n++)
   {
      fread(&a, sizeof(float), 1, file); 
      printf("%f\n",a);
   }
   fclose(file); 
   printf("file closed\n");
  return 0;
}
