#include <stdio.h>

int GetSet( int arr[] ) ;

int GetSet( int arr[] ) {
    int i ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &i ) ;
    for( int j = 0 ; j < i ; j ++ ) {
        printf( "Enter the elements: " ) ;
        scanf( "%d", &arr[j] ) ;
    }//end for loop
    return i ;
}//end function

int main() {
    int data[100] , num ;
    num = GetSet( data ) ;
    printf( "\n" ) ;
    printf( "Number of elements: %d \n", num ) ;
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "%d ", data[i] ) ;
    }//end for loop
    return 0 ;
}//end function
