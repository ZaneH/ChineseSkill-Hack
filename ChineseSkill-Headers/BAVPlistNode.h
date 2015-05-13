/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BAVPlistNode : XXUnknownSuperclass {
	bool _collection;
	NSString* _key;
	NSString* _type;
	NSObject* _value;
	NSArray* _children;
}
@property(copy, nonatomic) NSArray* children;
@property(assign, nonatomic, getter=isCollection) bool collection;
@property(copy, nonatomic) NSString* key;
@property(copy, nonatomic) NSString* type;
@property(copy, nonatomic) NSObject* value;
+ (id)plistNodeFromObject:(id)object key:(id)key;
- (void).cxx_destruct;
- (id)description;
@end

