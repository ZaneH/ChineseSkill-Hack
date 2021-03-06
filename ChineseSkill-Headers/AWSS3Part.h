/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSString, NSNumber;

@interface AWSS3Part : AWSModel {
	NSString* _ETag;
	NSDate* _lastModified;
	NSNumber* _partNumber;
	NSNumber* _size;
}
@property(retain, nonatomic) NSString* ETag;
@property(retain, nonatomic) NSDate* lastModified;
@property(retain, nonatomic) NSNumber* partNumber;
@property(retain, nonatomic) NSNumber* size;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)lastModifiedJSONTransformer;
- (void).cxx_destruct;
@end

