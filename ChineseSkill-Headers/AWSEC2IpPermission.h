/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString, NSNumber;

@interface AWSEC2IpPermission : AWSModel {
	NSNumber* _fromPort;
	NSString* _ipProtocol;
	NSArray* _ipRanges;
	NSNumber* _toPort;
	NSArray* _userIdGroupPairs;
}
@property(retain, nonatomic) NSNumber* fromPort;
@property(retain, nonatomic) NSString* ipProtocol;
@property(retain, nonatomic) NSArray* ipRanges;
@property(retain, nonatomic) NSNumber* toPort;
@property(retain, nonatomic) NSArray* userIdGroupPairs;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)ipRangesJSONTransformer;
+ (id)userIdGroupPairsJSONTransformer;
- (void).cxx_destruct;
@end

