/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSString, NSArray, NSNumber;

@interface AWSCloudWatchMetricAlarm : AWSModel {
	NSNumber* _actionsEnabled;
	NSArray* _alarmActions;
	NSString* _alarmArn;
	NSDate* _alarmConfigurationUpdatedTimestamp;
	NSString* _alarmDescription;
	NSString* _alarmName;
	int _comparisonOperator;
	NSArray* _dimensions;
	NSNumber* _evaluationPeriods;
	NSArray* _insufficientDataActions;
	NSString* _metricName;
	NSString* _namespace;
	NSArray* _OKActions;
	NSNumber* _period;
	NSString* _stateReason;
	NSString* _stateReasonData;
	NSDate* _stateUpdatedTimestamp;
	int _stateValue;
	int _statistic;
	NSNumber* _threshold;
	int _unit;
}
@property(retain, nonatomic) NSArray* OKActions;
@property(retain, nonatomic) NSNumber* actionsEnabled;
@property(retain, nonatomic) NSArray* alarmActions;
@property(retain, nonatomic) NSString* alarmArn;
@property(retain, nonatomic) NSDate* alarmConfigurationUpdatedTimestamp;
@property(retain, nonatomic) NSString* alarmDescription;
@property(retain, nonatomic) NSString* alarmName;
@property(assign, nonatomic) int comparisonOperator;
@property(retain, nonatomic) NSArray* dimensions;
@property(retain, nonatomic) NSNumber* evaluationPeriods;
@property(retain, nonatomic) NSArray* insufficientDataActions;
@property(retain, nonatomic) NSString* metricName;
@property(retain, nonatomic) NSString* namespace;
@property(retain, nonatomic) NSNumber* period;
@property(retain, nonatomic) NSString* stateReason;
@property(retain, nonatomic) NSString* stateReasonData;
@property(retain, nonatomic) NSDate* stateUpdatedTimestamp;
@property(assign, nonatomic) int stateValue;
@property(assign, nonatomic) int statistic;
@property(retain, nonatomic) NSNumber* threshold;
@property(assign, nonatomic) int unit;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)alarmConfigurationUpdatedTimestampJSONTransformer;
+ (id)comparisonOperatorJSONTransformer;
+ (id)dimensionsJSONTransformer;
+ (id)stateUpdatedTimestampJSONTransformer;
+ (id)stateValueJSONTransformer;
+ (id)statisticJSONTransformer;
+ (id)unitJSONTransformer;
- (void).cxx_destruct;
@end

