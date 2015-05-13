/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSSNS : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultSNS;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)addPermission:(id)permission;
- (id)confirmSubscription:(id)subscription;
- (id)createPlatformApplication:(id)application;
- (id)createPlatformEndpoint:(id)endpoint;
- (id)createTopic:(id)topic;
- (id)deleteEndpoint:(id)endpoint;
- (id)deletePlatformApplication:(id)application;
- (id)deleteTopic:(id)topic;
- (id)getEndpointAttributes:(id)attributes;
- (id)getPlatformApplicationAttributes:(id)attributes;
- (id)getSubscriptionAttributes:(id)attributes;
- (id)getTopicAttributes:(id)attributes;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)listEndpointsByPlatformApplication:(id)application;
- (id)listPlatformApplications:(id)applications;
- (id)listSubscriptions:(id)subscriptions;
- (id)listSubscriptionsByTopic:(id)topic;
- (id)listTopics:(id)topics;
- (id)publish:(id)publish;
- (id)removePermission:(id)permission;
- (id)setEndpointAttributes:(id)attributes;
- (id)setPlatformApplicationAttributes:(id)attributes;
- (id)setSubscriptionAttributes:(id)attributes;
- (id)setTopicAttributes:(id)attributes;
- (id)subscribe:(id)subscribe;
- (id)unsubscribe:(id)unsubscribe;
@end

