/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSNumber;

@interface AWSEC2DescribeVpnConnectionsRequest : AWSRequest {
	NSNumber* _dryRun;
	NSArray* _filters;
	NSArray* _vpnConnectionIds;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* filters;
@property(retain, nonatomic) NSArray* vpnConnectionIds;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end

