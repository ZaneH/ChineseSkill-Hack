/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary;

@interface AWSSQSCreateQueueRequest : AWSRequest {
	NSDictionary* _attributes;
	NSString* _queueName;
}
@property(retain, nonatomic) NSDictionary* attributes;
@property(retain, nonatomic) NSString* queueName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

