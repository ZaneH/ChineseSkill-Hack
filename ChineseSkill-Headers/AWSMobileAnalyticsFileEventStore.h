/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsEventStore.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock, NSString, AWSMobileAnalyticsFile;
@protocol AWSMobileAnalyticsContext;

@interface AWSMobileAnalyticsFileEventStore : XXUnknownSuperclass <AWSMobileAnalyticsEventStore> {
	id<AWSMobileAnalyticsContext> _context;
	AWSMobileAnalyticsFile* _eventsFile;
	NSRecursiveLock* _lock;
}
@property(retain, nonatomic) id<AWSMobileAnalyticsContext> context;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) AWSMobileAnalyticsFile* eventsFile;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSRecursiveLock* lock;
@property(readonly, assign) Class superclass;
+ (id)fileStoreWithContext:(id)context;
- (id)initWithContext:(id)context;
- (void).cxx_destruct;
- (id)deleteReadEvents:(int)events;
- (id)eventsFileName;
- (id)iterator;
- (BOOL)put:(id)put withError:(id*)error;
- (BOOL)tryInitializeWriter:(id*)writer error:(id*)error;
@end

