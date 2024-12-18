/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int main() {
    int in1 , in2 , in3 ;
    printf( "Input[1] : " ) ;
    scanf( "%d", &in1 ) ;
    printf( "Input[2] : " ) ;
    scanf( "%d", &in2 ) ;
    printf( "Input[3] : " ) ;
    scanf( "%d", &in3 ) ;

    int a , b , c ;
    if( in1 > in2 && in1 > in3 ) {
        a = in1 ;
        if( in2 > in3 ) {
            b = in2 ;
            c = in3 ;
        } else {
            b = in3 ;
            c = in2 ;
        }//end if-else
    } else if( in2 > in1 && in2 > in3 ) {
        a = in2 ;
        if( in1 > in3 ) {
            b = in1 ;
            c = in3 ;
        } else {
            b = in3 ;
            c = in1 ;
        }//end if-else
    } else {
        a = in3 ;
        if( in1 > in2 ) {
            b = in1 ;
            c = in2 ;
        } else {
            b = in2 ;
            c = in1 ;
        }//end if-else
    }//end if-else
    printf( "%d %d %d", a , b , c ) ;
    return 0 ;
}//end function
