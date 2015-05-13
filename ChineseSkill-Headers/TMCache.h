/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, TMDiskCache, TMMemoryCache;

@interface TMCache : XXUnknownSuperclass {
	NSString* _name;
	dispatch_queue_s* _queue;
	TMDiskCache* _diskCache;
	TMMemoryCache* _memoryCache;
}
@property(readonly, assign) unsigned diskByteCount;
@property(readonly, assign) TMDiskCache* diskCache;
@property(readonly, assign) TMMemoryCache* memoryCache;
@property(readonly, assign) NSString* name;
@property(assign) dispatch_queue_s* queue;
+ (id)sharedCache;
- (id)initWithName:(id)name;
- (id)initWithName:(id)name rootPath:(id)path;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)key;
- (void)objectForKey:(id)key block:(id)block;
- (void)removeAllObjects;
- (void)removeAllObjects:(id)objects;
- (void)removeObjectForKey:(id)key;
- (void)removeObjectForKey:(id)key block:(id)block;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forKey:(id)key block:(id)block;
- (void)trimToDate:(id)date;
- (void)trimToDate:(id)date block:(id)block;
@end

