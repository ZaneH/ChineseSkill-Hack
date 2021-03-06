/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSEC2CustomerGateway : AWSModel {
	NSString* _bgpAsn;
	NSString* _customerGatewayId;
	NSString* _ipAddress;
	NSString* _state;
	NSArray* _tags;
	NSString* _type;
}
@property(retain, nonatomic) NSString* bgpAsn;
@property(retain, nonatomic) NSString* customerGatewayId;
@property(retain, nonatomic) NSString* ipAddress;
@property(retain, nonatomic) NSString* state;
@property(retain, nonatomic) NSArray* tags;
@property(retain, nonatomic) NSString* type;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tagsJSONTransformer;
- (void).cxx_destruct;
@end

