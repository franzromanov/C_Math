#include <stdio.h>
//struct_def
typedef struct Dvector{int x;int y;int z;}Vector;

//vector_adder
Vector Vadd(Vector v1, Vector v2);

//vector_subtractor
Vector Vsub(Vector v1,Vector v2);

//dot_product
int dot(Vector v1,Vector v2);
