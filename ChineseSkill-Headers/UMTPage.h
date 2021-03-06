/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMTPage : XXUnknownSuperclass <NSCoding> {
	NSString* __page_name;
	long long __duration;
	BOOL __page_name_isset;
	BOOL __duration_isset;
}
@property(assign, nonatomic, getter=duration, setter=setDuration:) long long duration;
@property(retain, nonatomic, getter=page_name, setter=setPage_name:) NSString* page_name;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithPage_name:(id)page_name duration:(long long)duration;
- (void)dealloc;
- (id)description;
- (BOOL)durationIsSet;
- (void)encodeWithCoder:(id)coder;
- (BOOL)page_nameIsSet;
- (void)read:(id)read;
- (void)unsetDuration;
- (void)unsetPage_name;
- (void)write:(id)write;
@end

