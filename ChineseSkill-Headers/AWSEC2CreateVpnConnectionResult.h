/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2VpnConnection;

@interface AWSEC2CreateVpnConnectionResult : AWSModel {
	AWSEC2VpnConnection* _vpnConnection;
}
@property(retain, nonatomic) AWSEC2VpnConnection* vpnConnection;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)vpnConnectionJSONTransformer;
- (void).cxx_destruct;
@end

