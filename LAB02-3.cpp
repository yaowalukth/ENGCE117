#include <stdio.h>
#include <string.h>

void explode( char str1[] , char splitter , char str2[][ 10 ] , int *count ) {
    int i = 0 , j = 0 , k = 0 ;

    while ( str1[ i ] != '\0' ) { // วนลูปจนถึงจุดสิ้นสุดของข้อความ str1
        if ( str1[ i ] == splitter ) { // ถ้าพบตัวแบ่ง
            str2[ j ][ k ] = '\0' ; // สิ้นสุดข้อความปัจจุบันใน str2[j]
            j ++ ;               // ย้ายไปข้อความถัดไปใน str2
            k = 0 ;             // รีเซ็ตตำแหน่งภายในข้อความถัดไป
        } else {
            str2[ j ][ k ++ ] = str1[ i ] ; // เพิ่มตัวอักษรปัจจุบันใน str2[j]
        }//end if-else
        i ++ ; // อ่านตัวอักษรถัดไปใน str1
    }//end while loop
    str2[ j ][ k ] = '\0' ; // ปิดข้อความสุดท้ายด้วย '\0'
    *count = j + 1 ;    // จำนวนข้อความที่แยกได้
}//end function

int main() {
    char str1[ 1000 ] ;
    char out[ 20 ][ 10 ] ;
    int num = 0 ;
    printf( " " ) ;
    gets( str1 ) ;
    explode( str1 , '/' , out , &num ) ;

    for( int i = 0 ; i < num ; i ++ ) {
        printf( "str2[ %d ] = \"%s\"\n", i , out[i] ) ; // แสดงผลลัพธ์แต่ละข้อความ
    }//end for loop
    printf( "Count = %d \n", num ) ;
    return 0 ;
}//end function
