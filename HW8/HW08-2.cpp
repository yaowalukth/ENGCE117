#include <stdio.h>
int main() {
    int num ;
    printf( "enter score : " ) ;
    scanf( "%d", &num ) ;
    for( int i = 0 ; i < 1 ; i ++ ) {
        if( num >= 80 ) {
            printf( "A !" ) ;
        } else if( num >= 75 ) {
            printf( "B+ !" ) ;
        } else if( num >= 70 ) {
            printf( "B !" ) ;
        } else if( num >= 65 ) {
            printf( "C+ !" ) ;
        } else if( num >= 60 ) {
            printf( "C !" ) ;
        } else if( num >= 55 ) {
            printf( "D+ !" ) ;
        } else if( num >= 50 ) {
            printf( "D !" ) ;
        } else {
            printf( "F !" ) ;
        }//end if-else 
    }//end for loop
    return 0 ;
}//end function
