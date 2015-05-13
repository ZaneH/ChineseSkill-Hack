/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSData;

@interface AWSKinesisPutRecordInput : AWSRequest {
	NSData* _data;
	NSString* _explicitHashKey;
	NSString* _partitionKey;
	NSString* _sequenceNumberForOrdering;
	NSString* _streamName;
}
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSString* explicitHashKey;
@property(retain, nonatomic) NSString* partitionKey;
@property(retain, nonatomic) NSString* sequenceNumberForOrdering;
@property(retain, nonatomic) NSString* streamName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

