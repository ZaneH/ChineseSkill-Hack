/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TTransport.h"

@class NSMutableData, NSString;

@interface TMemoryBuffer : XXUnknownSuperclass <TTransport> {
	NSMutableData* mBuffer;
	unsigned mOffset;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)flush;
- (id)getBuffer;
- (int)readAll:(char*)all offset:(int)offset length:(int)length;
- (void)write:(const char*)write offset:(unsigned)offset length:(unsigned)length;
@end

