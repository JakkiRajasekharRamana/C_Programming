struct Counter{
    int secounds;
};

struct Counter c;

/*@
    behaviour one;
    assumes  0<=c.secounds<59;
    ensures c.secounds==\old(c.secounds)+1;
    behaviour two;
    assumes c.secounds==59;
    ensures c.secounds==0;
*/

void tick(){
    c.secounds=(c.secounds+1)%60;
}