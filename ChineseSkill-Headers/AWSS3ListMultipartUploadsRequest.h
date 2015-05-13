/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSS3ListMultipartUploadsRequest : AWSRequest {
	NSString* _bucket;
	NSString* _delimiter;
	int _encodingType;
	NSString* _keyMarker;
	NSNumber* _maxUploads;
	NSString* _prefix;
	NSString* _uploadIdMarker;
}
@property(retain, nonatomic) NSString* bucket;
@property(retain, nonatomic) NSString* delimiter;
@property(assign, nonatomic) int encodingType;
@property(retain, nonatomic) NSString* keyMarker;
@property(retain, nonatomic) NSNumber* maxUploads;
@property(retain, nonatomic) NSString* prefix;
@property(retain, nonatomic) NSString* uploadIdMarker;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)encodingTypeJSONTransformer;
- (void).cxx_destruct;
@end

