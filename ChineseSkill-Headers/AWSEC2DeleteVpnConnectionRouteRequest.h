/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString;

@interface AWSEC2DeleteVpnConnectionRouteRequest : AWSRequest {
	NSString* _destinationCidrBlock;
	NSString* _vpnConnectionId;
}
@property(retain, nonatomic) NSString* destinationCidrBlock;
@property(retain, nonatomic) NSString* vpnConnectionId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

