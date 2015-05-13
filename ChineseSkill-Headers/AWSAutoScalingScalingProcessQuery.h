/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString;

@interface AWSAutoScalingScalingProcessQuery : AWSRequest {
	NSString* _autoScalingGroupName;
	NSArray* _scalingProcesses;
}
@property(retain, nonatomic) NSString* autoScalingGroupName;
@property(retain, nonatomic) NSArray* scalingProcesses;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
