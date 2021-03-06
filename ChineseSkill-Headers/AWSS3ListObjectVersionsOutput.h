/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray, NSNumber;

@interface AWSS3ListObjectVersionsOutput : AWSModel {
	NSArray* _commonPrefixes;
	NSArray* _deleteMarkers;
	NSString* _delimiter;
	int _encodingType;
	NSNumber* _isTruncated;
	NSString* _keyMarker;
	NSNumber* _maxKeys;
	NSString* _name;
	NSString* _nextKeyMarker;
	NSString* _nextVersionIdMarker;
	NSString* _prefix;
	NSString* _versionIdMarker;
	NSArray* _versions;
}
@property(retain, nonatomic) NSArray* commonPrefixes;
@property(retain, nonatomic) NSArray* deleteMarkers;
@property(retain, nonatomic) NSString* delimiter;
@property(assign, nonatomic) int encodingType;
@property(retain, nonatomic) NSNumber* isTruncated;
@property(retain, nonatomic) NSString* keyMarker;
@property(retain, nonatomic) NSNumber* maxKeys;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* nextKeyMarker;
@property(retain, nonatomic) NSString* nextVersionIdMarker;
@property(retain, nonatomic) NSString* prefix;
@property(retain, nonatomic) NSString* versionIdMarker;
@property(retain, nonatomic) NSArray* versions;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)commonPrefixesJSONTransformer;
+ (id)deleteMarkersJSONTransformer;
+ (id)encodingTypeJSONTransformer;
+ (id)versionsJSONTransformer;
- (void).cxx_destruct;
@end

