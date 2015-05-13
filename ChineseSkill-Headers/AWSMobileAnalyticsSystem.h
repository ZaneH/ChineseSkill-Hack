/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol AWSMobileAnalyticsPreferences, AWSMobileAnalyticsConnectivity, AWSMobileAnalyticsFileManager, AWSMobileAnalyticsLifeCycleManager;

@protocol AWSMobileAnalyticsSystem <NSObject>
@property(readonly, assign, nonatomic) id<AWSMobileAnalyticsConnectivity> connectivity;
@property(readonly, assign, nonatomic) id<AWSMobileAnalyticsFileManager> fileManager;
@property(readonly, assign, nonatomic) id<AWSMobileAnalyticsLifeCycleManager> lifeCycleManager;
@property(readonly, assign, nonatomic) id<AWSMobileAnalyticsPreferences> preferences;
@end

