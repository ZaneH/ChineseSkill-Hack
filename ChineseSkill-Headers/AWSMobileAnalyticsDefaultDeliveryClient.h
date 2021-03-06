/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AWSMobileAnalyticsDeliveryClient.h"

@class NSOperationQueue, AWSMobileAnalyticsDeliveryPolicyFactory, NSString, AWSMobileAnalyticsERSRequestBuilder;
@protocol AWSMobileAnalyticsSerializer, AWSMobileAnalyticsHttpClient, AWSMobileAnalyticsEventStore, AWSMobileAnalyticsConfiguring;

@interface AWSMobileAnalyticsDefaultDeliveryClient : XXUnknownSuperclass <AWSMobileAnalyticsDeliveryClient> {
	id<AWSMobileAnalyticsHttpClient> _httpClient;
	id<AWSMobileAnalyticsConfiguring> _configuration;
	AWSMobileAnalyticsDeliveryPolicyFactory* _factory;
	AWSMobileAnalyticsERSRequestBuilder* _builder;
	NSOperationQueue* _operationQueue;
	id<AWSMobileAnalyticsEventStore> _eventStore;
	id<AWSMobileAnalyticsSerializer> _serializer;
	id _backgroundObserverHandle;
}
@property(retain, nonatomic) id backgroundObserverHandle;
@property(retain, nonatomic) AWSMobileAnalyticsERSRequestBuilder* builder;
@property(retain, nonatomic) id<AWSMobileAnalyticsConfiguring> configuration;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) id<AWSMobileAnalyticsEventStore> eventStore;
@property(retain, nonatomic) AWSMobileAnalyticsDeliveryPolicyFactory* factory;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<AWSMobileAnalyticsHttpClient> httpClient;
@property(retain, nonatomic) NSOperationQueue* operationQueue;
@property(retain, nonatomic) id<AWSMobileAnalyticsSerializer> serializer;
@property(readonly, assign) Class superclass;
+ (id)deliveryClientWithContext:(id)context withWanDelivery:(BOOL)wanDelivery;
+ (id)deliveryClientWithContext:(id)context withWanDelivery:(BOOL)wanDelivery withOperationQueue:(id)operationQueue;
+ (void)initialize;
- (id)initWithHttpClient:(id)httpClient withConfiguration:(id)configuration withLifeCycleManager:(id)lifeCycleManager withPolicyFactory:(id)policyFactory withRequestBuilder:(id)requestBuilder withOperationQueue:(id)operationQueue withEventStore:(id)eventStore withSerializer:(id)serializer;
- (void).cxx_destruct;
- (void)attemptDelivery;
- (void)attemptDeliveryUsingPolicies:(id)policies;
- (id)batchedEvents;
- (void)enqueueEventForDelivery:(id)delivery;
- (void)forceDeliveryAndWaitForCompletion:(BOOL)completion;
- (void)notify:(id)notify;
- (BOOL)submitEvents:(id)events andUpdatePolicies:(id)policies;
- (void)waitForDeliveryOperations;
@end

