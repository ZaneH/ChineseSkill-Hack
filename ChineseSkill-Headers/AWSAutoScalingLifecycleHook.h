/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSAutoScalingLifecycleHook : AWSModel {
	NSString* _autoScalingGroupName;
	NSString* _defaultResult;
	NSNumber* _globalTimeout;
	NSNumber* _heartbeatTimeout;
	NSString* _lifecycleHookName;
	NSString* _lifecycleTransition;
	NSString* _notificationMetadata;
	NSString* _notificationTargetARN;
	NSString* _roleARN;
}
@property(retain, nonatomic) NSString* autoScalingGroupName;
@property(retain, nonatomic) NSString* defaultResult;
@property(retain, nonatomic) NSNumber* globalTimeout;
@property(retain, nonatomic) NSNumber* heartbeatTimeout;
@property(retain, nonatomic) NSString* lifecycleHookName;
@property(retain, nonatomic) NSString* lifecycleTransition;
@property(retain, nonatomic) NSString* notificationMetadata;
@property(retain, nonatomic) NSString* notificationTargetARN;
@property(retain, nonatomic) NSString* roleARN;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

