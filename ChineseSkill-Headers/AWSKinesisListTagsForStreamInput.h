/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSKinesisListTagsForStreamInput : AWSRequest {
	NSString* _exclusiveStartTagKey;
	NSNumber* _limit;
	NSString* _streamName;
}
@property(retain, nonatomic) NSString* exclusiveStartTagKey;
@property(retain, nonatomic) NSNumber* limit;
@property(retain, nonatomic) NSString* streamName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

