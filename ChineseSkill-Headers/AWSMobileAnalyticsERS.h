/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSMobileAnalyticsERS : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultMobileAnalyticsERS;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)putEvents:(id)events;
@end

