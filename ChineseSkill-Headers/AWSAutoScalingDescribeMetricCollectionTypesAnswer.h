/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSAutoScalingDescribeMetricCollectionTypesAnswer : AWSModel {
	NSArray* _granularities;
	NSArray* _metrics;
}
@property(retain, nonatomic) NSArray* granularities;
@property(retain, nonatomic) NSArray* metrics;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)granularitiesJSONTransformer;
+ (id)metricsJSONTransformer;
- (void).cxx_destruct;
@end

