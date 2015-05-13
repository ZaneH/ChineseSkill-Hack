/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCacheDelegate.h"
#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject, NSCache;
@protocol FBCacheIndexFileDelegate, OS_dispatch_queue;

@interface FBCacheIndex : XXUnknownSuperclass <NSCacheDelegate> {
	id<FBCacheIndexFileDelegate> _delegate;
	NSCache* _cachedEntries;
	unsigned _currentDiskUsage;
	unsigned _diskCapacity;
	sqlite3* _database;
	sqlite3_stmt* _insertStatement;
	sqlite3_stmt* _removeByKeyStatement;
	sqlite3_stmt* _selectByKeyStatement;
	sqlite3_stmt* _selectByKeyFragmentStatement;
	sqlite3_stmt* _selectExcludingKeyFragmentStatement;
	sqlite3_stmt* _trimStatement;
	sqlite3_stmt* _updateStatement;
	NSObject<OS_dispatch_queue>* _databaseQueue;
}
@property(readonly, assign, nonatomic) unsigned currentDiskUsage;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* databaseQueue;
@property(readonly, copy) NSString* debugDescription;
@property(assign) id delegate;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) unsigned diskCapacity;
@property(assign, nonatomic) unsigned entryCacheCountLimit;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithCacheFolder:(id)cacheFolder;
- (id)_createCacheEntityInfo:(sqlite3_stmt*)info;
- (void)_dropTrimmingTable;
- (id)_entryForKey:(id)key;
- (void)_fetchCurrentDiskUsage;
- (void)_flushOrphanedFiles;
- (id)_readEntriesFromDatabase:(id)database excludingFragment:(BOOL)fragment;
- (id)_readEntryFromDatabase:(id)database;
- (void)_removeEntryFromDatabaseForKey:(id)key;
- (void)_trimDatabase;
- (void)_updateEntryInDatabaseForKey:(id)key entry:(id)entry;
- (void)_writeEntryInDatabase:(id)database;
- (void)cache:(id)cache willEvictObject:(id)object;
- (void)dealloc;
- (id)fileNameForKey:(id)key;
- (void)removeEntries:(id)entries excludingFragment:(BOOL)fragment;
- (void)removeEntryForKey:(id)key;
- (id)storeFileForKey:(id)key withData:(id)data;
@end
