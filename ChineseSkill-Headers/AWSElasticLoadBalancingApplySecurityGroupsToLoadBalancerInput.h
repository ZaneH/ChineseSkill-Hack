/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString;

@interface AWSElasticLoadBalancingApplySecurityGroupsToLoadBalancerInput : AWSRequest {
	NSString* _loadBalancerName;
	NSArray* _securityGroups;
}
@property(retain, nonatomic) NSString* loadBalancerName;
@property(retain, nonatomic) NSArray* securityGroups;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

