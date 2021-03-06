/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSDictionary;

@interface AWSSQSMessage : AWSModel {
	NSDictionary* _attributes;
	NSString* _body;
	NSString* _MD5OfBody;
	NSString* _MD5OfMessageAttributes;
	NSDictionary* _messageAttributes;
	NSString* _messageId;
	NSString* _receiptHandle;
}
@property(retain, nonatomic) NSString* MD5OfBody;
@property(retain, nonatomic) NSString* MD5OfMessageAttributes;
@property(retain, nonatomic) NSDictionary* attributes;
@property(retain, nonatomic) NSString* body;
@property(retain, nonatomic) NSDictionary* messageAttributes;
@property(retain, nonatomic) NSString* messageId;
@property(retain, nonatomic) NSString* receiptHandle;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)messageAttributesJSONTransformer;
- (void).cxx_destruct;
@end

