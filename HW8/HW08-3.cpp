#include <stdio.h>
int main() {
    int num , sum = 0 , n1 = 1 , n2 = 0 , next = 0 ;
    scanf( "%d", &num ) ;

    printf( "Series = " ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "%d", n1 ) ;
        sum += n1 ;
        next = n1 + n2 ;
        n2 = n1 ;
        n1 = next ;
        if( i < num - 1 ) {
            printf( " + " ) ;
        }//end if
    }//end for loop
    printf( "\n" ) ;
    printf( "Sum = %d", sum ) ;
    return 0 ;
}//end function
