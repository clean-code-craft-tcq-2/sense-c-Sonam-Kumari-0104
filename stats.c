#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i=0; 
    float sum=0; 
    
    s.average=0;
    s.max=numberset[0];
    s.min=numberset[0];
   
    //Average calculation
    for (i=0; i<setlength; i++)
    {
        sum=sum+numberset[i];
    }
    s.average = sum/setlength;
    
    //Max calculation
    for (i = 0; i < setlength; i++) {
    if (s.max < numberset[i]) {
      s.max = numberset[i];
    }
    }
    
    //Min calculation
    for (i = 0; i < setlength; i++) {
    if (s.min > numberset[i]) {
      s.min = numberset[i];
    }
    }
    
    return (s);
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
