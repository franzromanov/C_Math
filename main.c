#include "C_Math.h"

Vector P={1,2,3};
Vector Q={2,3,1};
Vector result;
int main(){
//code_here
result=Vadd(P,Q);
printf("the result is: ");
Vectorcat(result);
return 0;  
}
