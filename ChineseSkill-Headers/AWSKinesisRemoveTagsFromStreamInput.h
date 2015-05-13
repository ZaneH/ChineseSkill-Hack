/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString;

@interface AWSKinesisRemoveTagsFromStreamInput : AWSRequest {
	NSString* _streamName;
	NSArray* _tagKeys;
}
@property(retain, nonatomic) NSString* streamName;
@property(retain, nonatomic) NSArray* tagKeys;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

