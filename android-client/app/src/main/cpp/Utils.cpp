
#include "Utils.h"

long getCurrentTime() {
    struct timeval tv;
    //TODO:replace it
    return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

long currentTime;

void recordTime(){
    currentTime=getCurrentTime();
}

void logTime(){
    LOGD("Time passed : %ld",getCurrentTime()-currentTime);
}
