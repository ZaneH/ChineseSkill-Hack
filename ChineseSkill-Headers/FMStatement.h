/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FMStatement : XXUnknownSuperclass {
	sqlite3_stmt* _statement;
	NSString* _query;
	long _useCount;
	BOOL _inUse;
}
@property(assign) BOOL inUse;
@property(retain) NSString* query;
@property(assign) sqlite3_stmt* statement;
@property(assign) long useCount;
- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)reset;
@end

