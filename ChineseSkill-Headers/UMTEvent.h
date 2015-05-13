/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface UMTEvent : XXUnknownSuperclass <NSCoding> {
	NSString* __name;
	NSMutableDictionary* __properties;
	long long __duration;
	int __acc;
	long long __ts;
	BOOL __name_isset;
	BOOL __properties_isset;
	BOOL __duration_isset;
	BOOL __acc_isset;
	BOOL __ts_isset;
}
@property(assign, nonatomic, getter=acc, setter=setAcc:) int acc;
@property(assign, nonatomic, getter=duration, setter=setDuration:) long long duration;
@property(retain, nonatomic, getter=name, setter=setName:) NSString* name;
@property(retain, nonatomic, getter=properties, setter=setProperties:) NSMutableDictionary* properties;
@property(assign, nonatomic, getter=ts, setter=setTs:) long long ts;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithName:(id)name properties:(id)properties duration:(long long)duration acc:(int)acc ts:(long long)ts;
- (BOOL)accIsSet;
- (void)dealloc;
- (id)description;
- (BOOL)durationIsSet;
- (void)encodeWithCoder:(id)coder;
- (BOOL)nameIsSet;
- (BOOL)propertiesIsSet;
- (void)read:(id)read;
- (BOOL)tsIsSet;
- (void)unsetAcc;
- (void)unsetDuration;
- (void)unsetName;
- (void)unsetProperties;
- (void)unsetTs;
- (void)write:(id)write;
@end
