/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSSES : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultSES;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)deleteIdentity:(id)identity;
- (id)deleteVerifiedEmailAddress:(id)address;
- (id)getIdentityDkimAttributes:(id)attributes;
- (id)getIdentityNotificationAttributes:(id)attributes;
- (id)getIdentityVerificationAttributes:(id)attributes;
- (id)getSendQuota:(id)quota;
- (id)getSendStatistics:(id)statistics;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)listIdentities:(id)identities;
- (id)listVerifiedEmailAddresses:(id)addresses;
- (id)sendEmail:(id)email;
- (id)sendRawEmail:(id)email;
- (id)setIdentityDkimEnabled:(id)enabled;
- (id)setIdentityFeedbackForwardingEnabled:(id)enabled;
- (id)setIdentityNotificationTopic:(id)topic;
- (id)verifyDomainDkim:(id)dkim;
- (id)verifyDomainIdentity:(id)identity;
- (id)verifyEmailAddress:(id)address;
- (id)verifyEmailIdentity:(id)identity;
@end
