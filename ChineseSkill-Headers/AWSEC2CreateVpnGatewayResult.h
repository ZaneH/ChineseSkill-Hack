/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2VpnGateway;

@interface AWSEC2CreateVpnGatewayResult : AWSModel {
	AWSEC2VpnGateway* _vpnGateway;
}
@property(retain, nonatomic) AWSEC2VpnGateway* vpnGateway;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)vpnGatewayJSONTransformer;
- (void).cxx_destruct;
@end

