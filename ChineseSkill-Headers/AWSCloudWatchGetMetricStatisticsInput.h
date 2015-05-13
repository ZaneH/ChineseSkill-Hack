/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSDate, NSString, NSArray, NSNumber;

@interface AWSCloudWatchGetMetricStatisticsInput : AWSRequest {
	NSArray* _dimensions;
	NSDate* _endTime;
	NSString* _metricName;
	NSString* _namespace;
	NSNumber* _period;
	NSDate* _startTime;
	NSArray* _statistics;
	int _unit;
}
@property(retain, nonatomic) NSArray* dimensions;
@property(retain, nonatomic) NSDate* endTime;
@property(retain, nonatomic) NSString* metricName;
@property(retain, nonatomic) NSString* namespace;
@property(retain, nonatomic) NSNumber* period;
@property(retain, nonatomic) NSDate* startTime;
@property(retain, nonatomic) NSArray* statistics;
@property(assign, nonatomic) int unit;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dimensionsJSONTransformer;
+ (id)endTimeJSONTransformer;
+ (id)startTimeJSONTransformer;
+ (id)unitJSONTransformer;
- (void).cxx_destruct;
@end

