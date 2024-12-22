/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/
#include <stdio.h>

int main() {
    int value[ 50 ] , n ;
    float Avg , sum ;
    printf( "Enter value n :" ) ;
    scanf( "%d", &n ) ;

    for( int i = 0 ; i < n ; i ++ ) {
        printf( "Enter number %d :", i + 1  ) ;
        scanf( "%d", &value[ i ] ) ;
        sum += value[ i ] ;
    }//end for loop
    Avg = sum / n ;
    
    printf( "Sum = %.0f \n", sum ) ;
    printf( "Avg = %.2f \n", Avg ) ;
    return 0 ;
}//end function
