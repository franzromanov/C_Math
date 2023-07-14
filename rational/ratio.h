#include <stdio.h>
#include <stdlib.h>
//define_struct
typedef struct ratio {int num; int denum;}ratio;

////// --function-- //////

//rational_stream
ratio Rcat();

//rational_out
void Rout(ratio drop);

//rational_arithmetic
//adder
ratio R_add(ratio rat1, ratio rat2);

//subtractor
ratio R_sub(ratio rat1, ratio rat2);

//increment
void R_incr(ratio* drop);

//decrement
void R_dcr(ratio* drop);

//comparison
int R_comp(ratio rat1,ratio rat2);

//multiplication
ratio R_mlt(ratio rat1,ratio rat2);

//division
ratio R_div(ratio rat1, ratio rat2);
