/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, NSNumber;

@interface AWSElasticLoadBalancingDescribeAccessPointsInput : AWSRequest {
	NSArray* _loadBalancerNames;
	NSString* _marker;
	NSNumber* _pageSize;
}
@property(retain, nonatomic) NSArray* loadBalancerNames;
@property(retain, nonatomic) NSString* marker;
@property(retain, nonatomic) NSNumber* pageSize;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

