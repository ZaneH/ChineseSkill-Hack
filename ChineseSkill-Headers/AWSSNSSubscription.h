/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSSNSSubscription : AWSModel {
	NSString* _endpoint;
	NSString* _owner;
	NSString* _protocol;
	NSString* _subscriptionArn;
	NSString* _topicArn;
}
@property(retain, nonatomic) NSString* endpoint;
@property(retain, nonatomic) NSString* owner;
@property(retain, nonatomic) NSString* protocol;
@property(retain, nonatomic) NSString* subscriptionArn;
@property(retain, nonatomic) NSString* topicArn;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

