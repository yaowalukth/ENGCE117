#include <stdio.h>

void reverse( char str1[] , char str2[] ) {
    int length = 0 ;//กำหรดตัวแปรขึ้นมาเพื่อเอาไว้เก็บความยาวตัวอักษรของ str1
    
    while( str1[ length ] != '\0' ) {//นับความยาวของ str1
        length ++ ;
    }//end while loop

    for( int i = 0 ; i < length ; i ++ ) {//นำข้อความในstr1 มาเรียงกลับใน str2
        str2[ i ] = str1[ length - i - 1 ] ;
    }//end for loop
    str2[ length ] = '\0' ; //เพิ่ม \0 
}//end function
int main() {
    char text[ 50 ] ;// เก็บข้อความจากผู้ใช้
    char out[ 50 ] ;// เก็บข้อความกลับด้าน
    printf( " " ) ;
    gets( text ) ;//รับข้อความจากผู้ใช้
    reverse( text, out ) ;//เรียกใช้ฟังก์ชัน 
    printf( "%s", out ) ;//แสดงข้อความกลับด้าน
    return 0 ;
}//end function
