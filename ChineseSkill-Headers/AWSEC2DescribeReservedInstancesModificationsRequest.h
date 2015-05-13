/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray;

@interface AWSEC2DescribeReservedInstancesModificationsRequest : AWSRequest {
	NSArray* _filters;
	NSString* _nextToken;
	NSArray* _reservedInstancesModificationIds;
}
@property(retain, nonatomic) NSArray* filters;
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* reservedInstancesModificationIds;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end

