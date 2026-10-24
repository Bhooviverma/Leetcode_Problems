int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int total=0;
    for (int i=0; i<timeSeriesSize-1; i++) {
        int gap=timeSeries[i+1]-timeSeries[i];
        if(gap<duration) total+=gap;
        else total+=duration;
    }
    total+=duration;   
    return total;
}
