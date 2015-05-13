/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsDeliveryPolicy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol AWSMobileAnalyticsConfiguring, AWSMobileAnalyticsConnectivity;

@interface AWSMobileAnalyticsConnectivityPolicy : XXUnknownSuperclass <AWSMobileAnalyticsDeliveryPolicy> {
	BOOL _allowWan;
	id<AWSMobileAnalyticsConnectivity> _connectivity;
	id<AWSMobileAnalyticsConfiguring> _configuration;
}
@property(assign, nonatomic) BOOL allowWan;
@property(retain, nonatomic) id<AWSMobileAnalyticsConfiguring> configuration;
@property(retain, nonatomic) id<AWSMobileAnalyticsConnectivity> connectivity;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)policyWithConnectivity:(id)connectivity withConfiguration:(id)configuration withAllowWan:(BOOL)allowWan;
- (id)initWithConnectivity:(id)connectivity withConfiguration:(id)configuration withAllowWan:(BOOL)allowWan;
- (void).cxx_destruct;
- (void)handleDeliveryAttempt:(BOOL)attempt;
- (BOOL)isAllowed;
@end
