/*@
    ensures *a==\old(*b) && *b==\old(*a);

    requires \valid(a) && \valid(b);
*/

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}