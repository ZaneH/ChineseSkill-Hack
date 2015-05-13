/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSDate, NSNumber;

@interface AWSCognitoSyncIdentityPoolUsage : AWSModel {
	NSNumber* _dataStorage;
	NSString* _identityPoolId;
	NSDate* _lastModifiedDate;
	NSNumber* _syncSessionsCount;
}
@property(retain, nonatomic) NSNumber* dataStorage;
@property(retain, nonatomic) NSString* identityPoolId;
@property(retain, nonatomic) NSDate* lastModifiedDate;
@property(retain, nonatomic) NSNumber* syncSessionsCount;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)lastModifiedDateJSONTransformer;
- (void).cxx_destruct;
@end

