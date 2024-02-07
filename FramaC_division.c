//6

/*@
    requires \valid(q);
    requires \valid(r);
    requires y!=0;
    requires x!=0;
    ensures *q==x/y;
    ensures *r==x%y;

*/

void dev_rem(unsigned x,unsigned y,unsigned *q,unsigned *r){
    *q=x/y;
    *r=x%y;
}