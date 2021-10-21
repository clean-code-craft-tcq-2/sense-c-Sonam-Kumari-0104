#include <stdio.h>
#include "stats.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlertCallCount++;
    ledAlertCallCount++;
  }
}
