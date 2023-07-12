#include <stdio.h>
#include "vector.h"
//vector_addition
Vector Vadd(Vector v1, Vector v2){
Vector add;
add.x=v1.x+v2.x;
add.y=v1.y+v2.y;
add.z=v1.z+v2.z;
return add;
}

//vector_subtraction
Vector Vsub(Vector v1,Vector v2){
Vector sub;
sub.x=v1.x-v2.x;
sub.y=v1.y-v2.y;
sub.z=v1.z-v2.z;
return sub;
}

//dot_product
int dot(Vector v1,Vector v2){
int drop;
drop=(v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z);
return drop;
}
