/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSCognitoIdentityListIdentityPoolsInput : AWSRequest {
	NSNumber* _maxResults;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSNumber* maxResults;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

