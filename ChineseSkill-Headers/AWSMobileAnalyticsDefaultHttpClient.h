/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AWSMobileAnalyticsHttpClient.h"

@class AWSMobileAnalyticsERS, NSString, NSMutableArray;

@interface AWSMobileAnalyticsDefaultHttpClient : XXUnknownSuperclass <AWSMobileAnalyticsHttpClient> {
	AWSMobileAnalyticsERS* _ers;
	NSMutableArray* _interceptors;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) AWSMobileAnalyticsERS* ers;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* interceptors;
@property(readonly, assign) Class superclass;
+ (id)httpClient;
- (id)init;
- (void).cxx_destruct;
- (void)addInterceptor:(id)interceptor;
- (id)buildRequest:(id)request withTimeout:(double)timeout;
- (id)execute:(id)execute withRetries:(int)retries withTimeout:(double)timeout;
- (id)execute:(id)execute withRetries:(int)retries withTimeout:(double)timeout withRetryHandler:(id)retryHandler;
- (id)freshRequest;
@end

