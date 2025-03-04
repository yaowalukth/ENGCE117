#include <stdio.h>
int main() {
    int num ;
    int answer = 1 ;
    printf( "Input number :" ) ;
    scanf( "%d", &num ) ;
    if( num < 1 ) {
        printf( "Factorial is not defined for negative numbers.\n" ) ;
        return 0;
    } else {
        for( int i = num ; i >= 1 ; i -- ) {
            answer *= i ;
        }//end for loop
        printf( "%d! = ", num ) ;
        for( int i = num ; i >= 1 ; i -- ) {
            printf( "%d", i ) ;
            if( i != 1 ) {
                printf( "x" ) ;
            }//end if
        }//end for loop
        printf( "\n" ) ;
        printf( "%d! = %d",num , answer ) ;
    }//end if else
    return 0 ;
}//end function
