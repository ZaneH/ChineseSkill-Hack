/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2DescribeRegionsResult : AWSModel {
	NSArray* _regions;
}
@property(retain, nonatomic) NSArray* regions;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)regionsJSONTransformer;
- (void).cxx_destruct;
@end

