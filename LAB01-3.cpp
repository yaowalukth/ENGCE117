#include <stdio.h>

int *GetSet( int *num ) ;

int main() {
    int num ;
    GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet( int *num ) {
    int data[ 500 ] ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;
    for( int i = 0 ; i < *num ; i ++ ) {
        printf( "Enter the elements [ %d ]: ", i + 1 ) ;
        scanf( "%d", &data[ i ] ) ;
    }//end for loop

    printf( "Number of elements : %d\n", *num ) ;
    for( int i = 0 ; i < *num ; i ++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for loop
    return 0 ;
}//end function
