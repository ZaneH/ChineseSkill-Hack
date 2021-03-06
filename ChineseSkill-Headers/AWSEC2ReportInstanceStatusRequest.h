/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSDate, NSString, NSArray, NSNumber;

@interface AWSEC2ReportInstanceStatusRequest : AWSRequest {
	NSString* _detail;
	NSNumber* _dryRun;
	NSDate* _endTime;
	NSArray* _instances;
	NSArray* _reasonCodes;
	NSDate* _startTime;
	int _status;
}
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSDate* endTime;
@property(retain, nonatomic) NSArray* instances;
@property(retain, nonatomic) NSArray* reasonCodes;
@property(retain, nonatomic) NSDate* startTime;
@property(assign, nonatomic) int status;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)endTimeJSONTransformer;
+ (id)startTimeJSONTransformer;
+ (id)statusJSONTransformer;
- (void).cxx_destruct;
@end

