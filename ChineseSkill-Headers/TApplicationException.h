/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TException.h"


__attribute__((objc_exception))
@interface TApplicationException : TException {
	int mType;
}
+ (id)exceptionWithType:(int)type reason:(id)reason;
+ (id)read:(id)read;
- (id)initWithType:(int)type reason:(id)reason;
- (void)write:(id)write;
@end

