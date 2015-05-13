/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString, NSNumber;

@interface AWSEC2CreateNetworkInterfaceRequest : AWSRequest {
	NSString* _detail;
	NSNumber* _dryRun;
	NSArray* _groups;
	NSString* _privateIpAddress;
	NSArray* _privateIpAddresses;
	NSNumber* _secondaryPrivateIpAddressCount;
	NSString* _subnetId;
}
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* groups;
@property(retain, nonatomic) NSString* privateIpAddress;
@property(retain, nonatomic) NSArray* privateIpAddresses;
@property(retain, nonatomic) NSNumber* secondaryPrivateIpAddressCount;
@property(retain, nonatomic) NSString* subnetId;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)privateIpAddressesJSONTransformer;
- (void).cxx_destruct;
@end

