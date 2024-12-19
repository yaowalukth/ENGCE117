/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include <stdio.h>

int main() {
    int st , nd , rd ;
    printf( " " ) ;
    scanf( "%d %d %d", &st , &nd , &rd ) ;

    printf( "1st Number = %d\n", st ) ;
    printf( "2nd Number = %d\n", nd ) ;
    printf( "3rd Number = %d\n", rd ) ;
    if( st > nd && st > rd ) {
        printf( "The 1st Number is the greatest among three" ) ;
    } else if( nd > st && nd > rd ) {
        printf( "The 2nd Number is the greatest among three" ) ;
    } else {
        printf( "The 3rd Number is the greatest among three" ) ;
    }//end if-else
    return 0 ;
}//end functon
