/*____________________________________________________________________________________________
 // program - 1

 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
 ______________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j<=i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 2

 *  *  *  *  * 
 *  *  *  *
 *  *  *
 *  *
 *
 ______________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j<=6-i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
    }
    
}
*/


/*____________________________________________________________________________________________
 // program - 3

             * 
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j>=6-i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 4

*  *  *  *  * 
   *  *  *  *
      *  *  *
         *  *
            *
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 5

          *
       *  *  *       
    *  *  *  *  *
 *  *  *  *  *  *  *
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <=4 ; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 6

    *
   * *
  * * *
 * * * *
* * * * *
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j,k=1;
    for ( i = 1; i <= 6; i++)
    {
        for ( j = 1; j <= 9; j++)
        {
            if (j>=6-i && j<=4+i && k%2==0)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            k++;
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 7

 *  *  *  *  *  *  *  *  * 
 *  *  *  *     *  *  *  *
 *  *  *           *  *  *
 *  *                 *  *
 *                       *
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 9; j++)
        {
            if (j<=6-i || j>=4+i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 8

          1
       1  2  1
    1  2  3  2  1
 1  2  3  4  3  2  1
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j,k;
    for (i = 1; i <= 4; i++)
    {
        k=1;
        for ( j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                printf(" %d ",k);
                j<4?k++:k--;
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 9

 A  B  C  D  C  B  A 
 A  B  C     D  C  B
 A  B           C  B
 A                 B
 ____________________________________________________________________________________________
 */
/*
#include<stdio.h>
int main(){
    int i,j;
    char k;
    for ( i = 1; i <= 4; i++)
    {
        k = 'A';
        for ( j = 1; j <= 7; j++)
        {
            if (j<=5-i || j>= 3+i)
            {
                printf(" %c ",k);
                j<4?k++:k--;
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 10

          *
       *  *  *
    *  *  *  *  *
 *  *  *  *  *  *  *
    *  *  *  *  *
       *  *  *
          *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=0;
    for ( i = 1; i <= 7; i++)
    {
        i<=4?k++:k--;
        for ( j = 1; j <= 7; j++)
        {
            
            if (j>=5-k && j<=3+k)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 11

 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *
 *  *
 *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=0;
    for ( i = 1; i <= 7; i++)
    {
        i<=4?k++:k--;
        for ( j = 1; j <= 7; j++)
        {
            if (j<=k)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 12

 *  *  *  *  *  *  * 
    *  *  *  *  *
       *  *  *
          *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if(j>=i && j<=8-i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 13

             1
          2  3  2
       3  4  5  4  3
    4  5  6  7  6  5  4
 ____________________________________________________________________________________________
*/

/*
#include<stdio.h>
int main(){
    int i,j,k;
    for ( i = 1; i <= 4; i++)
    {
        k=i;
        for ( j = 0; j <= 7; j++)
        {
            
            if (j>=5-i && j<=3+i)
            {
                printf(" %d ",k);
                j<4?k++:k--;
                
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 14

 6  5  4  3  2  1  0 
 5  4  3  2  1  0
 4  3  2  1  0
 3  2  1  0
 2  1  0
 1  0
 0
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k;
    for ( i = 1; i <= 7; i++)
    {
        k = 7-i;
        for ( j = 1; j <= 7; j++)
        {
            if (j<=8-i)
            {
                printf(" %d ",k);
                k--;
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 15

             5 
          4  5
       3  4  5
    2  3  4  5
 1  2  3  4  5
    2  3  4  5
       3  4  5
          4  5
             5
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=0;
    for ( i = 1; i <= 9; i++)
    {
        i<=5?k++:k--;

        for ( j = 1; j <= 5; j++)
        {
            if (j>=6-k)
            {
                printf(" %d ",j);
            }
            else{
                printf("   ");
            }
            
            
        }
        
        printf("\n");
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 16

    *  *  *  *  *    
 *     *  *  *     *
 *  *     *     *  *
 *  *  *     *  *  *
 *  *     *     *  *
 *     *  *  *     *
    *  *  *  *  *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if (i==j || j == 8-i)
            {
                printf("   ");
            }
            else{
                printf(" * ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 17

 *  *  *  *  *  *  *  *  * 
 *  *  *  *     *  *  *  *
 *  *  *           *  *  *
 *  *                 *  *
 *                       *
 *  *                 *  * 
 *  *  *           *  *  *
 *  *  *  *     *  *  *  *
 *  *  *  *  *  *  *  *  *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=0;
    for ( i = 1; i <= 9; i++)
    {
        i<=5?k++:k--;
        for ( j = 1; j <= 9; j++)
        {
            if (j<=6-k || j>=4+k)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 18

 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *
       *  *  *  *  *
          *  *  *
             *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=4;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 9; j++)
        {
            if (j>=5-k && j<=5+k)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        k--;
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 19

          A
       A  B  A
    A  B  C  B  A
 A  B  C  D  C  B  A
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    char k;
    for ( i = 1; i <= 4; i++)
    {
        k = 'A';
        for ( j = 1; j <= 9; j++)
        {

            if (j>=5-i && j<=3+i)
            {
                printf(" %c ",k);
                j<4?k++:k--;
                
            }
            else{
                printf("   ");
            }
            

        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 20

          A  1
       A  B  1  2
    A  B  C  1  2  3
 A  B  C  D  1  2  3  4
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,b;
    char a;
    for ( i = 1; i <= 4; i++)
    {
        b=1;
        a = 'A';
        for ( j = 1; j <= 8; j++)
        {
            if (j>=5-i && j<=4+i)
            {
                if (j<=4)
                {
                    printf(" %c ",a);
                    a++;
                }
                else{
                    printf(" %d ",b);
                    b++;
                }
                
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 21

   *****
  *****
 *****
*****
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 8; j++)
        {
            if (j>=5-i && j<=9-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }

            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 22

   1   
  12A
 123AB
1234ABC
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k;
    char a;
    for ( i = 1; i <= 4; i++)
    {
        k = 1, a = 'A';
        for ( j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                if (j<=4)
                {
                    printf("%d",k);
                    k++;
                }
                else{
                    printf("%c",a);
                    a++;
                }
                
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 23

1     
10
101
1010
10101
101010
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 6; i++)
    {
        for ( j = 1; j <= 6; j++)
        {
            if (j<=i)
            {
                if (j%2!=0)
                {
                    printf("1");
                }
                else{
                    printf("0");
                }
                
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 24

 *  *  *  *  *  *  * 
 *                 *
 *     *  *  *     *
 *     *     *     *
 *     *  *  *     *
 *                 *
 *  *  *  *  *  *  *
 ____________________________________________________________________________________________
*/

/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <= 7; j++)
        {
            if ((i==1||i==7||j==1||j==7) || (i>=3&&i<=5&&j>=3&&j<=5) && (i==3||i==5||j==3||j==5))
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/


/*____________________________________________________________________________________________
 // program - 26

A   
BA
CBA
DCBA
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    char k;
    for (i = 0; i <= 3; i++)
    {
        k = 'A'+i;
        for ( j = 0; j <= 3; j++)
        {
            if (j<=i)
            {
                printf("%c",k);
                k--;
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 27

          1
       2  1  2
    3  2  1  2  3
 4  3  2  1  2  3  4
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k;
    for ( i = 1; i <= 4; i++)
    {
        k = i;
        for ( j = 1; j <= 7; j++)
        {
            
            if (j>=5-i && j<=3+i)
            {
                printf(" %d ",k);
                j<4?k--:k++;
            }
            else{
                printf("   ");
            }
            
            
        }

        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 28

1        
3*2
4*5*6
10*9*8*7
11*12*13*14*15
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,flag,k=0,p;//l
    for ( i = 1; i <= 5; i++)
    {
        flag = 1;
        if (i%2==1)
        {
            k=k+1;
        }
        else{
            k--;
            k=k+i;
        }
        p=k;

        //l=0;
        for ( j = 1; j <= 9; j++)
        {
            if (j<=2*i-1)
            {
                if (flag==1)//(l%2)
                {
                    printf("%d",p);
                    if (i%2)
                    {
                        p++;
                        k++;
                        
                    }
                    else{
                        p--;
                    }
                    
                }
                else{
                printf("*");
                }
                flag = 1-flag;
                //k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 29

             A 
          C  B
       F  E  D
    J  I  H  G
 O  N  M  L  K
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    char l,a = 64;
    for ( i = 1; i <= 5; i++)
    {
        a = a+2*(i-1)+1;
        
        for ( j = 1; j <= 5; j++)
        {
            
           if (j>=6-i)
           {
            
            printf(" %c ",a--);
            
            
           }
           else{
            printf("   ");
           }
           
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 30

             A 
          C  B
       F  E  D
    J  I  H  G
 O  N  M  L  K
 ____________________________________________________________________________________________
*/

/*



*/




/*____________________________________________________________________________________________
 // program - 31

   1   
  A B
 1 2 3
A B C D
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,flag,k;
    char l;
    for ( i = 1; i <= 4; i++)
    {
        flag=1,k=1,l='A';
        for ( j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                flag==1?(i%2!=0?printf("%d",k++):printf("%c",l++)):printf(" ");
                flag = 1-flag;
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/


/*____________________________________________________________________________________________
 // program - 32

 *           * 
    *     *    
       *
    *     *
 *           *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if (i==j || j==6-i)
            {
                printf(" * ");
            }
            else{
                printf("   ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/



/*____________________________________________________________________________________________
 // program - 33

 A  B  C  D  E  F  G 
 A  B  C     E  F  G
 A  B           F  G
 A                 G
 ____________________________________________________________________________________________
*/

/*
#include<stdio.h>
int main(){
    int i,j;
    char d;
    for ( i = 1; i <= 5; i++)
    {
        d = 'A';
        for ( j = 1; j <= 7; j++)
        {
            
            if (j<=5-i || j>=3+i)
            {
                
                printf(" %c ",d);
            }
            else{
                printf("   ");
            }
            d++;
        }
        printf("\n");
        
    }
    
}
*/

/*____________________________________________________________________________________________
 // program - 34

 1 
 6  6
 10  10  10
 13  13  13  13
 15  15  15  15  15
 ____________________________________________________________________________________________
*/

/*
#include<stdio.h>
int main(){
    int i,j,k=1,p;
    for ( i = 1; i <= 5; i++)
    {
        //p=6-i;
        for ( j = 1; j <= 5; j++)
        {
             
            if (j<=i)
            {
                printf(" %d ",k);
            }
            else{
                printf("   ");
            }
            
        }
        
        k=k+7-i;
        k--;
        
        printf("\n");
        
    }
    
}
*/


/*____________________________________________________________________________________________
 // program - 35

   *   
  * *  
 * * *
* * * *
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,flag;
    for ( i = 1; i <= 4; i++)
    {
        flag = 1;
        for ( j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=3+i)
            {
                flag == 1?printf("*"):printf(" ");
                flag = 1-flag;
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}
*/



/*____________________________________________________________________________________________
 // program - 36
      
 0 
 0  1
 0  2  4
 0  3  6  9
 0  4  8  12  16
 ____________________________________________________________________________________________
*/
/*
#include<stdio.h>
int main(){
    int i,j,k=0;
    for ( i = 0; i <= 4; i++)
    {
        for ( j = 0; j <= 4; j++)
        {
            if (j<=i)
            {
                printf(" %d ",j*i);
            }
            else
            {
                printf("   ");
            }
            
        }
        k++;
        printf("\n");
        
    }
    
}
*/


















