#include "ratio.h"

//rational_stream
ratio Rcat(){
ratio drop;
printf("input, ex:1/2 >>> ");
scanf(" %d/%d",&drop.num,&drop.denum);

//zero_handling
if((drop).denum==0){printf("\033[1;31mError, zero division! Aborted!\n");exit(0);}

return drop;
}

//rational_out
void Rout(ratio drop){
printf("%d/%d\n",drop.num,drop.denum);
}

//rational_arithmetic

//multiplication
ratio R_mlt(ratio rat1, ratio rat2){

//zero_handling
if(rat1.denum==0||rat2.denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//negative_handling
if(rat1.denum<0){rat1.denum=rat1.denum*(-1);rat1.num=rat1.num*(-1);}
if(rat2.denum<0){rat2.denum=rat2.denum*(-1);rat2.num=rat2.num*(-1);}

//declare
ratio res;

//process
res.num=rat1.num*rat2.num;
res.denum=rat1.denum*rat2.denum;


return res;
};

//division
ratio R_div(ratio rat1, ratio rat2){

//zero_handling
if(rat1.denum==0||rat2.denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//negative_handling
if(rat1.denum<0){rat1.denum=rat1.denum*(-1);rat1.num=rat1.num*(-1);}
if(rat2.denum<0){rat2.denum=rat2.denum*(-1);rat2.num=rat2.num*(-1);}

//declare
ratio res;
int tmp;



//process

//invertion
tmp=rat2.num;
rat2.num=rat2.denum;
rat2.denum=tmp;

//mlt
res.num=rat1.num*rat2.num;
res.denum=rat1.denum*rat2.denum;

return res;
};

//adder
ratio R_add(ratio rat1, ratio rat2){

//zero_handling
if(rat1.denum==0||rat2.denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//declare
ratio res;
int T;

//positive_condition
if(rat1.denum<0){rat1.denum=rat1.denum*(-1);rat1.num=rat1.num*(-1);}
if(rat2.denum<0){rat2.denum=rat2.denum*(-1);rat2.num=rat2.num*(-1);}

if(rat1.denum==rat2.denum)T=0;
else T=1;

switch(T){
case 1:
        res.denum=rat2.denum*rat1.denum;
        res.num=(rat1.num*rat2.denum)+(rat2.num*rat1.denum);
        break;
case 0:
        res.num=rat1.num-rat2.num;
        res.denum=rat1.denum;
        break;
}

return res;
}



//subtractor
ratio R_sub(ratio rat1, ratio rat2){

//zero_handling
if(rat1.denum==0||rat2.denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//declare
ratio res;
int T;

//negative_handling
if(rat1.denum<0){rat1.denum=rat1.denum*(-1);rat1.num=rat1.num*(-1);}
if(rat2.denum<0){rat2.denum=rat2.denum*(-1);rat2.num=rat2.num*(-1);}

if(rat1.denum==rat2.denum)T=0;
else T=1;

switch(T){
case 1:
        res.denum=rat2.denum*rat1.denum;
        res.num=(rat1.num*rat2.denum)-(rat2.num*rat1.denum);
        break;
case 0:
        res.num=rat1.num-rat2.num;
        res.denum=rat1.denum;
        break;
}
return res;
}


//increment
void R_incr(ratio* drop){

//zero_handling
if((*drop).denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//negative_handling
if((*drop).denum<0){(*drop).denum=(*drop).denum*(-1);(*drop).num=(*drop).num*(-1);}

//increment
(*drop).num=(*drop).num+(*drop).denum;
}


//decrement
void R_dcr(ratio* drop){
//zero_handling
if((*drop).denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}


//negative_handling
if((*drop).denum<0){(*drop).denum=(*drop).denum*(-1);(*drop).num=(*drop).num*(-1);}

//decrement
(*drop).num=(*drop).num-(*drop).denum;
}


//comparison
int R_comp(ratio rat1,ratio rat2){

//zero_handling
if(rat1.denum==0||rat2.denum==0){printf("\033[1;31mError, zero division! Aborted\n");exit(0);}

//negative_handling
if(rat1.denum<0){rat1.denum=rat1.denum*(-1);rat1.num=rat1.num*(-1);}
if(rat2.denum<0){rat2.denum=rat2.denum*(-1);rat2.num=rat2.num*(-1);}


if(rat1.denum==rat2.denum)
{

        rat2.num=rat2.num*rat1.denum;
        rat1.denum=rat1.num*rat2.denum;
        rat2.denum=rat2.denum*rat1.denum;
        rat1.denum=rat2.denum;
        

}

if(rat1.num>rat2.num)return 1;
if(rat1.num==rat2.num)return 0;
if(rat1.num<rat2.num)return -1;


}
