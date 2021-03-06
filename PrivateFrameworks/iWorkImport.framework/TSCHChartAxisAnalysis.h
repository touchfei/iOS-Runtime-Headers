/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisAnalysis : NSObject {
    double  _dataSetModelMax;
    double  _dataSetModelMin;
    NSArray * _majorGridLocations;
    double  _max;
    double  _min;
    NSArray * _minorGridLocations;
    double  _modelAverage;
    double  _modelMax;
    double  _modelMedian;
    double  _modelMin;
    long long  _retainCount;
    NSArray * _totals;
}

@property (nonatomic) double dataSetModelMax;
@property (nonatomic) double dataSetModelMin;
@property (nonatomic, copy) NSArray *majorGridLocations;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic, copy) NSArray *minorGridLocations;
@property (nonatomic) double modelAverage;
@property (nonatomic) double modelMax;
@property (nonatomic) double modelMedian;
@property (nonatomic) double modelMin;
@property (nonatomic, copy) NSArray *totals;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (double)dataSetModelMax;
- (double)dataSetModelMin;
- (void)dealloc;
- (id)majorGridLocations;
- (double)max;
- (double)min;
- (id)minorGridLocations;
- (double)modelAverage;
- (double)modelMax;
- (double)modelMedian;
- (double)modelMin;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDataSetModelMax:(double)arg1;
- (void)setDataSetModelMin:(double)arg1;
- (void)setMajorGridLocations:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setMinorGridLocations:(id)arg1;
- (void)setModelAverage:(double)arg1;
- (void)setModelMax:(double)arg1;
- (void)setModelMedian:(double)arg1;
- (void)setModelMin:(double)arg1;
- (void)setTotals:(id)arg1;
- (id)totals;

@end
