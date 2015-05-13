/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "STTwitterProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccount, NSString, ACAccountStore;

__attribute__((visibility("hidden")))
@interface STTwitterOS : XXUnknownSuperclass <STTwitterProtocol> {
	ACAccountStore* _accountStore;
	ACAccount* _account;
	double _timeoutInSeconds;
}
@property(retain, nonatomic) ACAccount* account;
@property(retain, nonatomic) ACAccountStore* accountStore;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) double timeoutInSeconds;
+ (id)parametersDictionaryFromAmpersandSeparatedParameterString:(id)ampersandSeparatedParameterString;
+ (id)parametersDictionaryFromCommaSeparatedParametersString:(id)commaSeparatedParametersString;
+ (id)twitterAPIOSWithAccount:(id)account;
+ (id)twitterAPIOSWithFirstAccount;
- (id)init;
- (id)initWithAccount:(id)account;
- (void).cxx_destruct;
- (BOOL)canVerifyCredentials;
- (id)consumerName;
- (id)fetchAPIResource:(id)resource baseURLString:(id)string httpMethod:(int)method parameters:(id)parameters uploadProgressBlock:(id)block completionBlock:(id)block6 errorBlock:(id)block7;
- (id)fetchResource:(id)resource HTTPMethod:(id)method baseURLString:(id)string parameters:(id)parameters uploadProgressBlock:(id)block downloadProgressBlock:(id)block6 successBlock:(id)block7 errorBlock:(id)block8;
- (BOOL)hasAccessToTwitter;
- (id)loginTypeDescription;
- (void)postReverseAuthAccessTokenWithAuthenticationHeader:(id)authenticationHeader successBlock:(id)block errorBlock:(id)block3;
- (id)username;
- (void)verifyCredentialsWithSuccessBlock:(id)successBlock errorBlock:(id)block;
@end

