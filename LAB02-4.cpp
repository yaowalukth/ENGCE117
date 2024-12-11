#include <stdio.h>
#include <string.h>
//str1: ข้อความที่ต้องการแยก
//splitters: ตัวอักขระที่ใช้เป็นตัวแบ่ง (สามารถมีหลายตัวได้)
//str2: อาร์เรย์ที่ใช้เก็บผลลัพธ์ที่ได้จากการแยก
//count: ตัวแปรที่ใช้เก็บจำนวนข้อความที่แยกได้
void explode( char str1[] , char splitters[] , char str2[][10] , int *count ) {
    char *text ;
    int i = 0 ;
    text =  strtok( str1 , splitters ) ;//ใช้ strtok เพื่อแยกข้อความตามตัวแบ่งที่กำหนด
    while( text != NULL ) {
        strncpy( str2[ i ] , text , 50 ) ;
        i ++ ;
        text = strtok( NULL , splitters ) ;
    }//end while loop
    *count = i ;
}//end function

int main() {
    char str1[ 1000 ] ;
    char out[ 20 ][ 10 ] ;
    char splitters[] = " / , : , - , _ , * , , , ! ," ;
    int num = 0 ;

    printf( " " ) ;
    gets( str1 ) ;    
    explode( str1 , splitters , out , &num ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "str2[ %d ] = \"%s\"\n", i , out[i] ) ;
    }//end for loop
    printf( "count = %d \n", num ) ;
    return 0 ;
}//end function
