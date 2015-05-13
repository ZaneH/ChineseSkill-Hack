/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSSESSetIdentityDkimEnabledRequest : AWSRequest {
	NSNumber* _dkimEnabled;
	NSString* _identity;
}
@property(retain, nonatomic) NSNumber* dkimEnabled;
@property(retain, nonatomic) NSString* identity;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
