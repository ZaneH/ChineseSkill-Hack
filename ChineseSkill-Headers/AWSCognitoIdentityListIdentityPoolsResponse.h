/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSCognitoIdentityListIdentityPoolsResponse : AWSModel {
	NSArray* _identityPools;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSArray* identityPools;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)identityPoolsJSONTransformer;
- (void).cxx_destruct;
@end

