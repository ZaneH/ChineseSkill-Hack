/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMTImprintValue : XXUnknownSuperclass <NSCoding> {
	NSString* __value;
	long long __ts;
	NSString* __guid;
	BOOL __value_isset;
	BOOL __ts_isset;
	BOOL __guid_isset;
}
@property(retain, nonatomic, getter=guid, setter=setGuid:) NSString* guid;
@property(assign, nonatomic, getter=ts, setter=setTs:) long long ts;
@property(retain, nonatomic, getter=value, setter=setValue:) NSString* value;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithValue:(id)value ts:(long long)ts guid:(id)guid;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (BOOL)guidIsSet;
- (void)read:(id)read;
- (BOOL)tsIsSet;
- (void)unsetGuid;
- (void)unsetTs;
- (void)unsetValue;
- (BOOL)valueIsSet;
- (void)write:(id)write;
@end

