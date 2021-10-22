#include "stats.h"
struct stats
    {
        float average;
        float max;
        float min;
    };

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int i=0; 
    
    s.average=0;
    s.max=numberset[0];
    s.min=numberset[0];
    
    for (i=0; i<setlength; i++);
    {
        s.average=s.average+numberset[i];
    }
    for (i = 0; i < setlength; i++) {
    if (s.max < numberset[i]) {
      s.max = numberset[i];
    }
    }
    for (i = 0; i < setlength; i++) {
    if (s.min > numberset[i]) {
      s.min = numberset[i];
    }
    }
    s.average = 0;
    s.min = 0;
    s.max = 0;
    return (s);
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
