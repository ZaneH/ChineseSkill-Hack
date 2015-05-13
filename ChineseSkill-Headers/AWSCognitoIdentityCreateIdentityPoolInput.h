/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWSCognitoIdentityCreateIdentityPoolInput : AWSRequest {
	NSNumber* _allowUnauthenticatedIdentities;
	NSString* _developerProviderName;
	NSString* _identityPoolName;
	NSArray* _openIdConnectProviderARNs;
	NSDictionary* _supportedLoginProviders;
}
@property(retain, nonatomic) NSNumber* allowUnauthenticatedIdentities;
@property(retain, nonatomic) NSString* developerProviderName;
@property(retain, nonatomic) NSString* identityPoolName;
@property(retain, nonatomic) NSArray* openIdConnectProviderARNs;
@property(retain, nonatomic) NSDictionary* supportedLoginProviders;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

