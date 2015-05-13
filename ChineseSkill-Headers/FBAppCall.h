/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FBAccessTokenData, NSString, NSError, FBAppLinkData, FBDialogsData;

@interface FBAppCall : XXUnknownSuperclass {
	NSString* _ID;
	NSError* _error;
	FBDialogsData* _dialogData;
	FBAppLinkData* _appLinkData;
	FBAccessTokenData* _accessTokenData;
}
@property(copy, nonatomic) NSString* ID;
@property(retain, nonatomic) FBAccessTokenData* accessTokenData;
@property(retain, nonatomic) FBAppLinkData* appLinkData;
@property(retain, nonatomic) FBDialogsData* dialogData;
@property(retain, nonatomic) NSError* error;
+ (id)appCallFromApplinkArgs_v2:(id)applinkArgs_v2 applinkArgs:(id)args createTimeUTC:(id)utc originalQueryParameters:(id)parameters;
+ (id)appCallFromApplinkData:(id)applinkData applinkData:(id)data originalQueryParameters:(id)parameters;
+ (id)appCallFromURL:(id)url;
+ (void)handleDidBecomeActive;
+ (void)handleDidBecomeActiveWithSession:(id)handle;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application fallbackHandler:(id)handler;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session;
+ (BOOL)handleOpenURL:(id)url sourceApplication:(id)application withSession:(id)session fallbackHandler:(id)handler;
+ (BOOL)invokeHandler:(id)handler withAccessToken:(id)accessToken appLinkData:(id)data;
+ (void)invokeHandler:(id)handler withError:(id)error;
+ (void)openDeferredAppLink:(id)link;
+ (BOOL)tryOpenSession:(id)session withAccessToken:(id)accessToken;
- (id)init;
- (id)init:(BOOL)init;
- (id)initWithID:(id)anId enforceScheme:(BOOL)scheme appID:(id)anId3 urlSchemeSuffix:(id)suffix;
- (void)dealloc;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAppCall:(id)appCall;
- (BOOL)isValid;
- (void)logInboundAppLinkEvent;
@end

