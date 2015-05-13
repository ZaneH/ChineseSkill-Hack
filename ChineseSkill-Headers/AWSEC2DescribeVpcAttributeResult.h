/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, AWSEC2AttributeBooleanValue;

@interface AWSEC2DescribeVpcAttributeResult : AWSModel {
	AWSEC2AttributeBooleanValue* _enableDnsHostnames;
	AWSEC2AttributeBooleanValue* _enableDnsSupport;
	NSString* _vpcId;
}
@property(retain, nonatomic) AWSEC2AttributeBooleanValue* enableDnsHostnames;
@property(retain, nonatomic) AWSEC2AttributeBooleanValue* enableDnsSupport;
@property(retain, nonatomic) NSString* vpcId;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)enableDnsHostnamesJSONTransformer;
+ (id)enableDnsSupportJSONTransformer;
- (void).cxx_destruct;
@end

