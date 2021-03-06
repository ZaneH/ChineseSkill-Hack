/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMANBaseEvent : XXUnknownSuperclass <NSCoding> {
	double _ts;
	NSString* _type;
	NSString* _date;
	NSString* _time;
	NSString* _session_id;
	BOOL _sendingFlag;
}
@property(copy, nonatomic) NSString* date;
@property(assign, nonatomic) BOOL sendingFlag;
@property(copy, nonatomic) NSString* session_id;
@property(copy, nonatomic) NSString* time;
@property(assign, nonatomic) double ts;
@property(copy, nonatomic) NSString* type;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)attributes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToEvent:(id)event;
@end

