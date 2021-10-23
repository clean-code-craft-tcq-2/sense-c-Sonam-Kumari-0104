#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    struct Stats s;
    int i=0; 
    float sum=0; 
    
    // Setting all fields of computedStats (average, max, min) to NAN in case of empty array
    if (numberset==0)
    {
       s.average=0.0/0.0;
       s.max=0.0/0.0;
       s.min=0.0/0.0;
    }
   else
   {
        s.average=0;
        s.max=numberset[0];
        s.min=numberset[0];
   }
   
    //Average calculation
    for (i=0; i<setlength; i++)
    {
        sum=sum+numberset[i];
    }
    s.average = sum/setlength;
    
    //Max calculation
    for (i = 0; i < setlength; i++) 
    {
        if (s.max < numberset[i]) 
        {
         s.max = numberset[i];
        }
    }
    
    //Min calculation
    for (i = 0; i < setlength; i++) 
    {
        if (s.min > numberset[i]) 
        {
          s.min = numberset[i];
        }
    }
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
