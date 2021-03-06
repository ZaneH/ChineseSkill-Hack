/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSData;

@interface AWSKinesisRecord : AWSModel {
	NSData* _data;
	NSString* _partitionKey;
	NSString* _sequenceNumber;
}
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSString* partitionKey;
@property(retain, nonatomic) NSString* sequenceNumber;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

