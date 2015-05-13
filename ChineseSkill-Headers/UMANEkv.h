/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UMANBaseEvent.h"

@class NSMutableDictionary, NSString;

@interface UMANEkv : UMANBaseEvent {
	int du;
	NSString* _id;
	NSString* _key;
	NSMutableDictionary* _values;
}
@property(assign, nonatomic) int du;
@property(copy, nonatomic) NSString* id;
@property(copy, nonatomic) NSString* key;
@property(retain, nonatomic) NSMutableDictionary* values;
- (id)initWithCoder:(id)coder;
- (id)initWithId:(id)anId key:(id)key values:(id)values;
- (id)attributes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)processDictionary:(id)dictionary;
- (void)updateDu;
@end

