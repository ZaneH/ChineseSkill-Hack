/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TTransport.h"

@class NSMutableData, NSString;

@interface TFramedTransport : XXUnknownSuperclass <TTransport> {
	id<TTransport> mTransport;
	NSMutableData* writeBuffer;
	NSMutableData* readBuffer;
	unsigned readOffset;
	unsigned char dummy_header[4];
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithTransport:(id)transport;
- (void)dealloc;
- (void)flush;
- (int)readAll:(char*)all offset:(int)offset length:(int)length;
- (void)readFrame;
- (void)write:(const char*)write offset:(unsigned)offset length:(unsigned)length;
@end

