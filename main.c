#include "C_Math.h"
//declare
Vector P;
Vector Q;
ratio a;
ratio b;
ratio drop;
int bag;

Vector result;
int main(){
//initialize::Vector
P=Vstream();
Q=Vstream();

//process&output
result=Vadd(P,Q);
printf("[additon] the result is: ");
Vectorcat(result);

//process&output
result=Vsub(P,Q);
printf("[subtraction] the result is: ");
Vectorcat(result);

//process&output
bag=dot(P,Q);
printf("[dot product] the result is: %d",bag\n);
//////////////////////////////////////////

//initialize::Rational_Number
a=Rcat();
b=Rcat();

//rpocess&output
drop=R_add(a,b);
printf("[addition] the result is: ");
Rout(drop);

//rpocess&output
drop=R_sub(a,b);
printf("[subtraction] the result is: ");
Rout(drop);

//rpocess&output
drop=R_incr(&a);
printf("[increment] the result is: ");
Rout(drop);

//rpocess&output
drop=R_dcr(&b);
printf("[decrement] the result is: ");
Rout(drop);

//rpocess&output
bag=R_comp(a,b);
printf("[comparison] the result is: %d\n",bag);

return 0;
}
