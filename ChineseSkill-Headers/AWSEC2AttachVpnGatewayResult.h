/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2VpcAttachment;

@interface AWSEC2AttachVpnGatewayResult : AWSModel {
	AWSEC2VpcAttachment* _vpcAttachment;
}
@property(retain, nonatomic) AWSEC2VpcAttachment* vpcAttachment;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)vpcAttachmentJSONTransformer;
- (void).cxx_destruct;
@end

