/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSEC2DescribeSpotPriceHistoryResult : AWSModel {
	NSString* _nextToken;
	NSArray* _spotPriceHistory;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* spotPriceHistory;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)spotPriceHistoryJSONTransformer;
- (void).cxx_destruct;
@end
