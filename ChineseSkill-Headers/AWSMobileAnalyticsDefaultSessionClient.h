/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AWSMobileAnalyticsSessionClient.h"

@class NSRecursiveLock, AWSMobileAnalyticsDelayedBlock, AWSMobileAnalyticsSession, AWSMobileAnalyticsSessionStore, NSString;
@protocol AWSMobileAnalyticsSessionClientState, AWSMobileAnalyticsContext, AWSMobileAnalyticsDeliveryClient, AWSMobileAnalyticsLifeCycleManager, AWSMobileAnalyticsInternalEventClient;

@interface AWSMobileAnalyticsDefaultSessionClient : XXUnknownSuperclass <AWSMobileAnalyticsSessionClient> {
	AWSMobileAnalyticsSession* _session;
	id<AWSMobileAnalyticsContext> _context;
	id<AWSMobileAnalyticsInternalEventClient> _eventClient;
	id<AWSMobileAnalyticsLifeCycleManager> _lifeCycleManager;
	AWSMobileAnalyticsSessionStore* _sessionStore;
	long _sessionRestartDelayMs;
	long _sessionResumeDelayMs;
	id<AWSMobileAnalyticsDeliveryClient> _deliveryClient;
	id _foregroundObserverHandle;
	id _backgroundObserverHandle;
	NSRecursiveLock* _lockObject;
	id<AWSMobileAnalyticsSessionClientState> _state;
	AWSMobileAnalyticsDelayedBlock* _delayedBlock;
}
@property(retain, nonatomic) id backgroundObserverHandle;
@property(retain, nonatomic) id<AWSMobileAnalyticsContext> context;
@property(readonly, copy) NSString* debugDescription;
@property(retain, nonatomic) AWSMobileAnalyticsDelayedBlock* delayedBlock;
@property(assign, nonatomic) __weak id<AWSMobileAnalyticsDeliveryClient> deliveryClient;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) __weak id<AWSMobileAnalyticsInternalEventClient> eventClient;
@property(retain, nonatomic) id foregroundObserverHandle;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<AWSMobileAnalyticsLifeCycleManager> lifeCycleManager;
@property(retain, nonatomic) NSRecursiveLock* lockObject;
@property(retain, nonatomic) AWSMobileAnalyticsSession* session;
@property(assign, nonatomic) long sessionRestartDelayMs;
@property(assign, nonatomic) long sessionResumeDelayMs;
@property(retain, nonatomic) AWSMobileAnalyticsSessionStore* sessionStore;
@property(retain, nonatomic) id<AWSMobileAnalyticsSessionClientState> state;
@property(readonly, assign) Class superclass;
+ (void)initialize;
- (id)initWithEventClient:(id)eventClient withDeliveryClient:(id)deliveryClient withContext:(id)context;
- (void).cxx_destruct;
- (void)cancelDelayedBlock;
- (void)changeState:(int)state;
- (void)dealloc;
- (void)endCurrentSession;
- (int)getSessionState;
- (void)pauseCurrentSession;
- (void)pauseSession;
- (void)resumeCurrentSession;
- (void)resumeSession;
- (void)startNewSession;
- (void)startSession;
- (void)stopSession;
- (void)waitForSessionTimeout;
@end

