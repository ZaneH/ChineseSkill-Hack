/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString;

@interface AWSAutoScalingExitStandbyQuery : AWSRequest {
	NSString* _autoScalingGroupName;
	NSArray* _instanceIds;
}
@property(retain, nonatomic) NSString* autoScalingGroupName;
@property(retain, nonatomic) NSArray* instanceIds;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

