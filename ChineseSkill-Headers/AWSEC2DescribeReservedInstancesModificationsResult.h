/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSEC2DescribeReservedInstancesModificationsResult : AWSModel {
	NSString* _nextToken;
	NSArray* _reservedInstancesModifications;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* reservedInstancesModifications;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)reservedInstancesModificationsJSONTransformer;
- (void).cxx_destruct;
@end

