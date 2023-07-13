#include "C_Math.h"
Vector P;
Vector Q;
Vector result;
int main(){
//code_here
P=Vstream();
//printf("\n");
Q=Vstream();
result=Vadd(P,Q);
printf("the result is: ");
Vectorcat(result);
return 0;
}
