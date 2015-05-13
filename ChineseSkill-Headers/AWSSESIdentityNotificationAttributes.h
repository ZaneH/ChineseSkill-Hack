/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSSESIdentityNotificationAttributes : AWSModel {
	NSString* _bounceTopic;
	NSString* _complaintTopic;
	NSString* _deliveryTopic;
	NSNumber* _forwardingEnabled;
}
@property(retain, nonatomic) NSString* bounceTopic;
@property(retain, nonatomic) NSString* complaintTopic;
@property(retain, nonatomic) NSString* deliveryTopic;
@property(retain, nonatomic) NSNumber* forwardingEnabled;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

