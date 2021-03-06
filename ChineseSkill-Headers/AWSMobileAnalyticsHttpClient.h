/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class AWSMobileAnalyticsERS;

@protocol AWSMobileAnalyticsHttpClient <NSObject>
@property(retain, nonatomic) AWSMobileAnalyticsERS* ers;
- (void)addInterceptor:(id)interceptor;
- (id)execute:(id)execute withRetries:(int)retries withTimeout:(double)timeout;
- (id)execute:(id)execute withRetries:(int)retries withTimeout:(double)timeout withRetryHandler:(id)retryHandler;
- (id)freshRequest;
@end

