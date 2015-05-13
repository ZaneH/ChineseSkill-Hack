/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSS3ListObjectsRequest : AWSRequest {
	NSString* _bucket;
	NSString* _delimiter;
	int _encodingType;
	NSString* _marker;
	NSNumber* _maxKeys;
	NSString* _prefix;
}
@property(retain, nonatomic) NSString* bucket;
@property(retain, nonatomic) NSString* delimiter;
@property(assign, nonatomic) int encodingType;
@property(retain, nonatomic) NSString* marker;
@property(retain, nonatomic) NSNumber* maxKeys;
@property(retain, nonatomic) NSString* prefix;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)encodingTypeJSONTransformer;
- (void).cxx_destruct;
@end

