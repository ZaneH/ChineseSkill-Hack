/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString;

@interface AWSAutoScalingDeleteNotificationConfigurationType : AWSRequest {
	NSString* _autoScalingGroupName;
	NSString* _topicARN;
}
@property(retain, nonatomic) NSString* autoScalingGroupName;
@property(retain, nonatomic) NSString* topicARN;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

