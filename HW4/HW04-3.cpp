/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main() {
    
    int a , b , c ;
    printf( "Enter your num : " ) ;
    scanf( "%d", &a ) ;
    scanf( "%d", &b ) ;
    scanf( "%d", &c ) ;
    printf( "Answer = %d", a + b + c ) ;
    return 0 ;
}
