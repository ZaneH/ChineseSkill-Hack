/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, AWSElasticLoadBalancingLoadBalancerAttributes;

@interface AWSElasticLoadBalancingModifyLoadBalancerAttributesInput : AWSRequest {
	AWSElasticLoadBalancingLoadBalancerAttributes* _loadBalancerAttributes;
	NSString* _loadBalancerName;
}
@property(retain, nonatomic) AWSElasticLoadBalancingLoadBalancerAttributes* loadBalancerAttributes;
@property(retain, nonatomic) NSString* loadBalancerName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)loadBalancerAttributesJSONTransformer;
- (void).cxx_destruct;
@end

