/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary;

@interface AWSCognitoIdentityGetIdInput : AWSRequest {
	NSString* _accountId;
	NSString* _identityPoolId;
	NSDictionary* _logins;
}
@property(retain, nonatomic) NSString* accountId;
@property(retain, nonatomic) NSString* identityPoolId;
@property(retain, nonatomic) NSDictionary* logins;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

