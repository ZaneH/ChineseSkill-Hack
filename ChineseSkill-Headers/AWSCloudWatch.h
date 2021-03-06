/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSCloudWatch : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultCloudWatch;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)deleteAlarms:(id)alarms;
- (id)describeAlarmHistory:(id)history;
- (id)describeAlarms:(id)alarms;
- (id)describeAlarmsForMetric:(id)metric;
- (id)disableAlarmActions:(id)actions;
- (id)enableAlarmActions:(id)actions;
- (id)getMetricStatistics:(id)statistics;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)listMetrics:(id)metrics;
- (id)putMetricAlarm:(id)alarm;
- (id)putMetricData:(id)data;
- (id)setAlarmState:(id)state;
@end

