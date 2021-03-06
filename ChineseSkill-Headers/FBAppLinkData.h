/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString, NSDictionary, NSArray;

@interface FBAppLinkData : XXUnknownSuperclass {
	NSURL* _targetURL;
	NSArray* _actionTypes;
	NSArray* _actionIDs;
	NSString* _ref;
	NSString* _userAgent;
	NSDictionary* _refererData;
	NSDictionary* _originalQueryParameters;
	NSURL* _originalURL;
	NSDictionary* _arguments;
}
@property(copy) NSArray* actionIDs;
@property(copy) NSArray* actionTypes;
@property(copy) NSDictionary* arguments;
@property(copy) NSDictionary* originalQueryParameters;
@property(retain) NSURL* originalURL;
@property(copy) NSString* ref;
@property(copy) NSDictionary* refererData;
@property(retain) NSURL* targetURL;
@property(copy) NSString* userAgent;
+ (id)createFromURL:(id)url;
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url targetURL:(id)url2 originalParams:(id)params arguments:(id)arguments;
- (id)initWithURL:(id)url targetURL:(id)url2 ref:(id)ref userAgent:(id)agent refererData:(id)data originalParams:(id)params;
- (void)dealloc;
- (id)description;
- (BOOL)isValid;
@end

