/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSAutoScalingInstance : AWSModel {
	NSString* _availabilityZone;
	NSString* _healthStatus;
	NSString* _instanceId;
	NSString* _launchConfigurationName;
	int _lifecycleState;
}
@property(retain, nonatomic) NSString* availabilityZone;
@property(retain, nonatomic) NSString* healthStatus;
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) NSString* launchConfigurationName;
@property(assign, nonatomic) int lifecycleState;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)lifecycleStateJSONTransformer;
- (void).cxx_destruct;
@end

