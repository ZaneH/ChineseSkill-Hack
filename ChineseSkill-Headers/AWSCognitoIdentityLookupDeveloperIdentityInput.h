/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSCognitoIdentityLookupDeveloperIdentityInput : AWSRequest {
	NSString* _developerUserIdentifier;
	NSString* _identityId;
	NSString* _identityPoolId;
	NSNumber* _maxResults;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSString* developerUserIdentifier;
@property(retain, nonatomic) NSString* identityId;
@property(retain, nonatomic) NSString* identityPoolId;
@property(retain, nonatomic) NSNumber* maxResults;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
