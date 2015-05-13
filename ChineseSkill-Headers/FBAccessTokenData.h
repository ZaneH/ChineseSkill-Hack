/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString, NSArray;

@interface FBAccessTokenData : XXUnknownSuperclass <NSCopying> {
	NSString* _accessToken;
	NSString* _appID;
	NSString* _userID;
	NSArray* _permissions;
	NSArray* _declinedPermissions;
	NSDate* _expirationDate;
	int _loginType;
	NSDate* _refreshDate;
	NSDate* _permissionsRefreshDate;
}
@property(readonly, copy, nonatomic) NSString* accessToken;
@property(copy, nonatomic) NSString* appID;
@property(copy, nonatomic) NSArray* declinedPermissions;
@property(readonly, copy, nonatomic) NSDate* expirationDate;
@property(readonly, assign, nonatomic) int loginType;
@property(copy, nonatomic) NSArray* permissions;
@property(copy, nonatomic) NSDate* permissionsRefreshDate;
@property(copy, nonatomic) NSDate* refreshDate;
@property(copy, nonatomic) NSString* userID;
+ (id)createTokenFromDictionary:(id)dictionary;
+ (id)createTokenFromFacebookURL:(id)facebookURL appID:(id)anId urlSchemeSuffix:(id)suffix;
+ (id)createTokenFromString:(id)string permissions:(id)permissions declinedPermissions:(id)permissions3 expirationDate:(id)date loginType:(int)type refreshDate:(id)date6 permissionsRefreshDate:(id)date7 appID:(id)anId userID:(id)anId9;
+ (id)createTokenFromString:(id)string permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5;
+ (id)createTokenFromString:(id)string permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5 permissionsRefreshDate:(id)date6;
+ (id)createTokenFromString:(id)string permissions:(id)permissions expirationDate:(id)date loginType:(int)type refreshDate:(id)date5 permissionsRefreshDate:(id)date6 appID:(id)anId;
- (id)initWithToken:(id)token permissions:(id)permissions declinedPermissions:(id)permissions3 expirationDate:(id)date loginType:(int)type refreshDate:(id)date6 permissionsRefreshDate:(id)date7 appID:(id)anId userID:(id)anId9;
- (id)copyWithZone:(NSZone*)zone;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccessTokenData:(id)accessTokenData;
@end

