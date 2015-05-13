/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, AWSEC2Monitoring;

@interface AWSEC2InstanceMonitoring : AWSModel {
	NSString* _instanceId;
	AWSEC2Monitoring* _monitoring;
}
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) AWSEC2Monitoring* monitoring;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)monitoringJSONTransformer;
- (void).cxx_destruct;
@end

