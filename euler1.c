//Multiples of 3 and 5    
//If we list all the natural numbers below 10 that are multiples of 3 or 5,
//we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

//Results:
//The sum of all multiples of 3 or 5 below 1000 is 233168
//Total time = 0.000033 seconds

//c code:

#include <sys/time.h>
#include <stdio.h>


int show_multiples(int mult1,int mult2,int limit)
{
    //Finding the sum of all the multiples
    //of mult1 or mult2 below limit.
    
    //definitions
    int i, sum;
    
    //initialization
    sum=0;

    //validation
    if (mult1<=0 ||mult2<=0 ||limit<=0)
    {
        printf("\n\n Invalid values");
        return 1;
    }
    
    for (i=1; i < limit; i++)
    {   
        //add 'i' to sum if 'i' is multiple of mult1 or mult2
        if ((i % mult1 == 0) || (i % mult2 == 0))
            sum += i;

    }
    
    printf("\n\n The sum of all multiples of %d or %d below %d is %d"                ,mult1, mult2, limit, sum );
    return 0;

}    



int main(){
    int multiple1, multiple2, maxlimit;
    struct timeval  tv1, tv2;
    
    //start time
    gettimeofday(&tv1, NULL);
    
    multiple1=3;
    multiple2=5;
    maxlimit=1000;

    //find the solution
    show_multiples(multiple1, multiple2, maxlimit);
 
    //stop time
    gettimeofday(&tv2, NULL);

    printf  ("\n\n Total time = %f seconds\n",
            (double) (tv2.tv_usec - tv1.tv_usec) / 1000000 +
            (double) (tv2.tv_sec - tv1.tv_sec));
    
    return 0;
    
}
