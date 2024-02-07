//5

/*@
    requires 0<first<180 ;
    requires 0<secound<180 ;
    requires 0<(first+secound)<180;
    ensures 0<=\result<=180;
*/

int last_angle(int first,int secound){
    return 180-(first+secound);
}