/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsOptions.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AWSMobileAnalyticsDefaultOptions : XXUnknownSuperclass <AWSMobileAnalyticsOptions> {
	BOOL _allowEventCollection;
	BOOL _allowWANDelivery;
}
@property(readonly, assign, nonatomic) BOOL allowEventCollection;
@property(readonly, assign, nonatomic) BOOL allowWANDelivery;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)optionsWithAllowEventCollection:(BOOL)allowEventCollection withWANDelivery:(BOOL)wandelivery;
- (id)initWithAllowEventCollection:(BOOL)allowEventCollection withWANDelivery:(BOOL)wandelivery;
@end

