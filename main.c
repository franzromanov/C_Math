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
result=dot(P,Q);
printf("[dot product] the result is: ");
Vectorcat(result);
//////////////////////////////////////////

//initialize::Rational_Number
a=Rcat();
b=Rcat();

//rpocess&output
drop=Radd(a,b);
printf("[addition] the result is: ");
Rout(drop);

//rpocess&output
drop=Rsub(a,b);
printf("[subtraction] the result is: ");
Rout(drop);

//rpocess&output
drop=R_incr(a);
printf("[increment] the result is: ");
Rout(drop);

//rpocess&output
drop=R_dcr(b);
printf("[decrement] the result is: ");
Rout(drop);

//rpocess&output
bag=R_comp(a,b);
printf("[comparison] the result is: ");
printf("%d\n",bag);

return 0;
}
