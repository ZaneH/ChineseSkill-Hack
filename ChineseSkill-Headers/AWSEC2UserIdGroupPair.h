/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2UserIdGroupPair : AWSModel {
	NSString* _groupId;
	NSString* _groupName;
	NSString* _userId;
}
@property(retain, nonatomic) NSString* groupId;
@property(retain, nonatomic) NSString* groupName;
@property(retain, nonatomic) NSString* userId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
