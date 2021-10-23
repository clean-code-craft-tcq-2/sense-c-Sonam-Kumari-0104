#include <stdio.h>
#include "stats.h"
#include "alert.h"
 
// EmailAlerter function
void emailAlerter()
{
  emailAlertCallCount++;
}

// ledAlerter function
void ledAlerter()
{
  ledAlertCallCount++;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
  if(computedStats.max>maxThreshold)
  {
    emailAlerter();
    ledAlerter();  
  }
}
