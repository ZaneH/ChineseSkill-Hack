/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSEC2DhcpOptions : AWSModel {
	NSArray* _dhcpConfigurations;
	NSString* _dhcpOptionsId;
	NSArray* _tags;
}
@property(retain, nonatomic) NSArray* dhcpConfigurations;
@property(retain, nonatomic) NSString* dhcpOptionsId;
@property(retain, nonatomic) NSArray* tags;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dhcpConfigurationsJSONTransformer;
+ (id)tagsJSONTransformer;
- (void).cxx_destruct;
@end

