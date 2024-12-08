#include <stdio.h>

int GetMatrix( int *row , int *col , int *value ) {
    printf( " " ) ;
    scanf( "%d", row ) ;
    printf( " " ) ;
    scanf( "%d", col ) ;

    int result = ( *row ) * ( *col ) ;
    printf( " " ) ;
    for( int i = 0 ; i < result ; i ++ ) {
        scanf( "%d", &value[ i ] ) ;
    }//end for loop
    return 0 ;
}//end function

int main() {
    int *data , m , n ;
    int value[ 1000 ] ;
    data = value ;
    GetMatrix( &m , &n , data ) ;

    printf( "\n" ) ;
    printf( "Enter number of rows and columns: %d %d \n", m , n ) ;
    printf( "Enter matrix elements: \n" ) ;
    for( int i = 0 ; i < m ; i ++ ) {
        for( int j = 0 ; j < n ; j ++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for loop
        printf( "\n" ) ;
    }//end for loop
    return 0 ;
}//end function
