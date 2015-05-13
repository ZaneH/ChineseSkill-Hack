/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber, NSDate;

@interface AWSCognitoSyncRecord : AWSModel {
	NSDate* _deviceLastModifiedDate;
	NSString* _key;
	NSString* _lastModifiedBy;
	NSDate* _lastModifiedDate;
	NSNumber* _syncCount;
	NSString* _value;
}
@property(retain, nonatomic) NSDate* deviceLastModifiedDate;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSString* lastModifiedBy;
@property(retain, nonatomic) NSDate* lastModifiedDate;
@property(retain, nonatomic) NSNumber* syncCount;
@property(retain, nonatomic) NSString* value;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)deviceLastModifiedDateJSONTransformer;
+ (id)lastModifiedDateJSONTransformer;
- (void).cxx_destruct;
@end

