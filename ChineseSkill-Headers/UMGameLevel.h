/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface UMGameLevel : XXUnknownSuperclass <NSCoding> {
	double _ts;
	NSString* _name;
	BOOL _running;
	double _du;
}
@property(assign, nonatomic) double du;
@property(copy, nonatomic) NSString* name;
@property(assign, nonatomic) BOOL running;
@property(assign, nonatomic) double ts;
+ (id)levelWithName:(id)name;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithName:(id)name;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
@end

