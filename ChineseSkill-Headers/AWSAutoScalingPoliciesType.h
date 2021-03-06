/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSAutoScalingPoliciesType : AWSModel {
	NSString* _nextToken;
	NSArray* _scalingPolicies;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* scalingPolicies;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)scalingPoliciesJSONTransformer;
- (void).cxx_destruct;
@end

