/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSEC2DescribeReservedInstancesOfferingsResult : AWSModel {
	NSString* _nextToken;
	NSArray* _reservedInstancesOfferings;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* reservedInstancesOfferings;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)reservedInstancesOfferingsJSONTransformer;
- (void).cxx_destruct;
@end

