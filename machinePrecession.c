#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
	float error1,error2;
	printf("machine preceision for float is %e\n",FLT_EPSILON);
	float PI = 3.141592;
	error1 =(fabs(PI-3.141592))/3.141592;
	printf("Relative error in storing Pi is %.5e  \n",error1);
	float two=2.0;
	error2 = (fabs(two-2.0))/2.0;
	printf("Relative error in storing 2.0 is %.5e  \n",error2);
	printf("For float data type, Pi is not a machine number but 2.0 is a machine number\n");
}
