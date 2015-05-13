/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TTransport.h"

@class NSInputStream, NSString, NSOutputStream;

@interface TNSStreamTransport : XXUnknownSuperclass <TTransport> {
	NSInputStream* mInput;
	NSOutputStream* mOutput;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
- (id)initWithInputStream:(id)inputStream;
- (id)initWithInputStream:(id)inputStream outputStream:(id)stream;
- (id)initWithOutputStream:(id)outputStream;
- (void)dealloc;
- (void)flush;
- (int)readAll:(char*)all offset:(int)offset length:(int)length;
- (void)write:(const char*)write offset:(unsigned)offset length:(unsigned)length;
@end
