#include <stdio.h>

int main() {
    int n;
    int *a = &n ;
    printf( "Enter your line : " ) ;
    scanf( "%d", &n ) ;
    for( int i = 0 ; i < *a ; i ++ ) {
        printf( "[%d] Hello World \n", i + 1 ) ;
    }// end for loop
    return 0 ;
}// end function
