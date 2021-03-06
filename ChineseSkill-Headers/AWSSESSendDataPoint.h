/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSNumber;

@interface AWSSESSendDataPoint : AWSModel {
	NSNumber* _bounces;
	NSNumber* _complaints;
	NSNumber* _deliveryAttempts;
	NSNumber* _rejects;
	NSDate* _timestamp;
}
@property(retain, nonatomic) NSNumber* bounces;
@property(retain, nonatomic) NSNumber* complaints;
@property(retain, nonatomic) NSNumber* deliveryAttempts;
@property(retain, nonatomic) NSNumber* rejects;
@property(retain, nonatomic) NSDate* timestamp;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)timestampJSONTransformer;
- (void).cxx_destruct;
@end

