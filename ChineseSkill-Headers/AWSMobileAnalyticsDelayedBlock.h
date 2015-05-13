/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, AWSMobileAnalyticsCountDownLatch;

@interface AWSMobileAnalyticsDelayedBlock : XXUnknownSuperclass {
	BOOL _wasCancelled;
	id _blockToExecute;
	AWSMobileAnalyticsCountDownLatch* _latch;
	NSObject* _lock;
	double _waitDelay;
}
@property(copy, nonatomic) id blockToExecute;
@property(retain, nonatomic) AWSMobileAnalyticsCountDownLatch* latch;
@property(retain, nonatomic) NSObject* lock;
@property(assign, nonatomic) double waitDelay;
@property(assign, nonatomic) BOOL wasCancelled;
+ (id)delayedBlockWithDelay:(double)delay withBlock:(id)block;
- (id)initWithWithDelay:(double)delay withBlock:(id)block;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)execute;
- (void)handleCountDownTimer:(id)timer;
@end

