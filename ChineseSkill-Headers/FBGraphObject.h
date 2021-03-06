/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBGraphObject.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@protocol FBGraphObject <NSObject>
@optional
@property(assign, nonatomic) BOOL provisionedForPost;
@required
- (unsigned)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
@end

@interface FBGraphObject : XXUnknownSuperclass <FBGraphObject> {
	NSMutableDictionary* _jsonObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL provisionedForPost;
@property(readonly, assign) Class superclass;
+ (id)graphObject;
+ (id)graphObjectWrappingDictionary:(id)dictionary;
+ (id)graphObjectWrappingObject:(id)object;
+ (int)inferredImplTypeForSelector:(SEL)selector;
+ (BOOL)isGraphObjectID:(id)anId sameAs:(id)as;
+ (BOOL)isProtocolImplementationInferable:(id)inferable checkFBGraphObjectAdoption:(BOOL)adoption;
+ (id)openGraphActionForPost;
+ (id)openGraphObjectForPost;
+ (id)openGraphObjectForPostWithType:(id)type title:(id)title image:(id)image url:(id)url description:(id)description;
- (id)initWrappingDictionary:(id)dictionary;
- (BOOL)conformsToProtocol:(id)protocol;
- (unsigned)count;
- (void)dealloc;
- (void)forwardInvocation:(id)invocation;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtKey:(id)key;
- (id)keyEnumerator;
- (id)methodSignatureForSelector:(SEL)selector;
- (id)objectDescription;
- (id)objectForKey:(id)key;
- (id)objectID;
- (void)removeObjectForKey:(id)key;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObjectDescription:(id)description;
- (void)setObjectID:(id)anId;
@end

