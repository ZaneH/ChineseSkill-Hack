/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBSessionTokenCachingStrategy.h"

@class NSString, NSDate;

@interface FBSessionManualTokenCachingStrategy : FBSessionTokenCachingStrategy {
	NSString* _accessToken;
	NSDate* _expirationDate;
}
@property(copy) NSString* accessToken;
@property(copy) NSDate* expirationDate;
- (void)cacheTokenInformation:(id)information;
- (void)clearToken;
- (void)dealloc;
- (id)fetchTokenInformation;
@end

