/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsDefaultInterceptor.h"

@protocol AWSMobileAnalyticsClientContext;

@interface AWSMobileAnalyticsClientContextInterceptor : AWSMobileAnalyticsDefaultInterceptor {
	id<AWSMobileAnalyticsClientContext> _clientContext;
}
@property(retain, nonatomic) id<AWSMobileAnalyticsClientContext> clientContext;
+ (id)contextInterceptorWithClientContext:(id)clientContext;
- (id)initWithClientContext:(id)clientContext;
- (void).cxx_destruct;
- (void)before:(id)before;
@end

