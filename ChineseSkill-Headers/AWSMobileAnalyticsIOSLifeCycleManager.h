/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AWSMobileAnalyticsLifeCycleManager.h"

@class NSOperationQueue, NSString;

@interface AWSMobileAnalyticsIOSLifeCycleManager : XXUnknownSuperclass <AWSMobileAnalyticsLifeCycleManager> {
	NSOperationQueue* _queue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSOperationQueue* queue;
@property(readonly, assign) Class superclass;
+ (id)manager;
- (id)init;
- (void).cxx_destruct;
- (id)addBackgroundObserverUsingBlock:(id)block;
- (id)addForegroundObserverUsingBlock:(id)block;
- (void)applicationDidEnterBackground:(id)application;
- (void)applicationDidEnterForeground:(id)application;
- (void)dealloc;
- (void)executeBackgroundTasks:(id)tasks;
- (void)removeBackgroundObserver:(id)observer;
- (void)removeForegroundObserver:(id)observer;
@end
