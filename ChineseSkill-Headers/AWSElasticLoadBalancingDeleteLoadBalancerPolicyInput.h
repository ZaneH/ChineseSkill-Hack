/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString;

@interface AWSElasticLoadBalancingDeleteLoadBalancerPolicyInput : AWSRequest {
	NSString* _loadBalancerName;
	NSString* _policyName;
}
@property(retain, nonatomic) NSString* loadBalancerName;
@property(retain, nonatomic) NSString* policyName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
