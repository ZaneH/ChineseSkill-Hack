/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString;

@interface AWSKinesisMergeShardsInput : AWSRequest {
	NSString* _adjacentShardToMerge;
	NSString* _shardToMerge;
	NSString* _streamName;
}
@property(retain, nonatomic) NSString* adjacentShardToMerge;
@property(retain, nonatomic) NSString* shardToMerge;
@property(retain, nonatomic) NSString* streamName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

