#include <stdio.h>

char* reverse( char str1[] ,  char str2[] ) {
    int length = 0 ;
    while ( str1[ length ] != '\0' ) {
        length ++ ;
    }//end while loop

    for( int i = 0 ; i < length ; i ++ ) {//นำข้อความในstr1 มาเรียงกลับใน str2
        str2[ i ] = str1[ length - i - 1 ] ;
    }//end for loop
    str2[ length ] = '\0' ; //เพิ่ม \0 
    return str2 ;
}//end function

int main() {
    char text[ 50 ] ; 
    char TEXT[ 50 ] ;  
    char *out ;
    printf( " " ) ;
    gets( text ) ;
    out = reverse( text , TEXT ) ;
    printf( "%s", out ) ;
}//end function
