/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main() {
    int num ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;

    int i = num ;
    do {
        int l = 1 ;
        if( i <= 1 ) {
            l = 0 ;
        } else {
            for ( int j = 2 ; j * j <= i ; j++ ) {
                if ( i % j == 0 ) {
                    l = 0 ;
                    break ;
                }//end if
            }//end for
        }//end if-else
        if( l ) {
            printf( "%d ", i ) ;
        }//end if
        i -- ;
    } while( i > 1 ) ;
    return 0 ;
}//end function
