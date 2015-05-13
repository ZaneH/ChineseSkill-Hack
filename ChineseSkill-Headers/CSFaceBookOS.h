/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "STTwitterOS.h"

@class ACAccount, ACAccountStore;

__attribute__((visibility("hidden")))
@interface CSFaceBookOS : STTwitterOS {
	ACAccountStore* _accountStore;
	ACAccount* _facebookAccount;
}
@property(retain, nonatomic) ACAccountStore* accountStore;
@property(retain, nonatomic) ACAccount* facebookAccount;
- (id)init;
- (id)initWithAccount:(id)account;
- (void).cxx_destruct;
- (BOOL)hasAccessToFacebook;
- (id)username;
- (void)verifyCredentialsWithSuccessBlock:(id)successBlock errorBlock:(id)block;
@end

