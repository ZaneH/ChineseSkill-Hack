/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class STTwitterAPI, NSString;
@protocol CSAcountManagerDelegate;

__attribute__((visibility("hidden")))
@interface CSAccountManager : XXUnknownSuperclass {
	NSString* _name;
	NSString* _Email;
	id<CSAcountManagerDelegate> _delegate;
	STTwitterAPI* _twitter;
	long long _uid;
}
@property(copy, nonatomic) NSString* Email;
@property(assign, nonatomic) __weak id<CSAcountManagerDelegate> delegate;
@property(copy, nonatomic) NSString* name;
@property(retain, nonatomic) STTwitterAPI* twitter;
@property(assign, nonatomic) long long uid;
+ (id)accountInfo;
+ (id)appVersion;
+ (BOOL)canChangePassowrd;
+ (void)checkLessonFormRecordCacheFolder;
+ (void)checkProfileImageFolder;
+ (id)getExchangeCode;
+ (id)getTwitterUserInformation;
+ (id)getUserEmail;
+ (id)getUserName;
+ (BOOL)isFirstTimeModel;
+ (BOOL)isUserLoggedIn;
+ (BOOL)isUserLoginWithFacebook;
+ (BOOL)isUserLoginWithTwitter;
+ (BOOL)needToLogin;
+ (BOOL)needToShowNewFeature;
+ (void)saveImage:(id)image withName:(id)name;
+ (void)saveTwitterUserInformation:(id)information oauthToken:(id)token oauthTokenSecret:(id)secret;
+ (void)saveUserImage:(id)image;
+ (id)sharedInstance;
+ (BOOL)signupInfoCheckWithInfo:(id)info;
+ (void)storeInfo;
- (void).cxx_destruct;
- (void)FaceBookLoginFailed;
- (void)FaceBookLoginSuccessed;
- (void)dealloc;
- (void)deleteProfilePicture;
- (id)getLoginTypeString:(int)string;
- (void)loginWithFacebook;
- (void)loginWithLoginType:(int)loginType Email:(id)email Password:(id)password;
- (void)loginWithTwitter;
- (void)logout;
- (void)logoutWithFacebook;
- (id)profilePicture;
- (void)setLoginUserInfoUserName:(id)name Email:(id)email Password:(id)password type:(int)type;
- (void)setTwitterOAuthToken:(id)token oauthVerifier:(id)verifier;
@end

