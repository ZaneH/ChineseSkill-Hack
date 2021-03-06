/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2Address : AWSModel {
	NSString* _allocationId;
	NSString* _associationId;
	int _domain;
	NSString* _instanceId;
	NSString* _networkInterfaceId;
	NSString* _networkInterfaceOwnerId;
	NSString* _privateIpAddress;
	NSString* _publicIp;
}
@property(retain, nonatomic) NSString* allocationId;
@property(retain, nonatomic) NSString* associationId;
@property(assign, nonatomic) int domain;
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) NSString* networkInterfaceId;
@property(retain, nonatomic) NSString* networkInterfaceOwnerId;
@property(retain, nonatomic) NSString* privateIpAddress;
@property(retain, nonatomic) NSString* publicIp;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)domainJSONTransformer;
- (void).cxx_destruct;
@end

