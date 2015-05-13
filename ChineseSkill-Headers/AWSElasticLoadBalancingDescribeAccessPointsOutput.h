/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSElasticLoadBalancingDescribeAccessPointsOutput : AWSModel {
	NSArray* _loadBalancerDescriptions;
	NSString* _nextMarker;
}
@property(retain, nonatomic) NSArray* loadBalancerDescriptions;
@property(retain, nonatomic) NSString* nextMarker;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)loadBalancerDescriptionsJSONTransformer;
- (void).cxx_destruct;
@end
