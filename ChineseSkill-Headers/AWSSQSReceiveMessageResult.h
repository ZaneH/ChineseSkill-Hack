/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSSQSReceiveMessageResult : AWSModel {
	NSArray* _messages;
}
@property(retain, nonatomic) NSArray* messages;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)messagesJSONTransformer;
- (void).cxx_destruct;
@end

