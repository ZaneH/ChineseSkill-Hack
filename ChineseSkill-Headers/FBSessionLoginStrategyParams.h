/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface FBSessionLoginStrategyParams : XXUnknownSuperclass {
	BOOL _tryIntegratedAuth;
	BOOL _tryFBAppAuth;
	BOOL _trySafariAuth;
	BOOL _tryFallback;
	BOOL _isReauthorize;
	BOOL _canFetchAppSettings;
	int _defaultAudience;
	NSArray* _permissions;
	NSMutableDictionary* _webParams;
}
@property(assign) BOOL canFetchAppSettings;
@property(assign) int defaultAudience;
@property(assign) BOOL isReauthorize;
@property(retain, nonatomic) NSArray* permissions;
@property(assign) BOOL tryFBAppAuth;
@property(assign) BOOL tryFallback;
@property(assign) BOOL tryIntegratedAuth;
@property(assign) BOOL trySafariAuth;
@property(retain, nonatomic) NSMutableDictionary* webParams;
- (void)dealloc;
@end

