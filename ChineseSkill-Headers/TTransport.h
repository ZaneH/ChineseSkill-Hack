/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TTransport <NSObject>
- (void)flush;
- (int)readAll:(char*)all offset:(int)offset length:(int)length;
- (void)write:(const char*)write offset:(unsigned)offset length:(unsigned)length;
@end
