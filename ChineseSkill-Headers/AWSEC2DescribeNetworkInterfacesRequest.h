/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSNumber;

@interface AWSEC2DescribeNetworkInterfacesRequest : AWSRequest {
	NSNumber* _dryRun;
	NSArray* _filters;
	NSArray* _networkInterfaceIds;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* filters;
@property(retain, nonatomic) NSArray* networkInterfaceIds;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end

