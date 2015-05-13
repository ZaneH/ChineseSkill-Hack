/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSString, NSNumber;

@interface AWSEC2RevokeSecurityGroupIngressRequest : AWSRequest {
	NSString* _cidrIp;
	NSNumber* _dryRun;
	NSNumber* _fromPort;
	NSString* _groupId;
	NSString* _groupName;
	NSArray* _ipPermissions;
	NSString* _ipProtocol;
	NSString* _sourceSecurityGroupName;
	NSString* _sourceSecurityGroupOwnerId;
	NSNumber* _toPort;
}
@property(retain, nonatomic) NSString* cidrIp;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSNumber* fromPort;
@property(retain, nonatomic) NSString* groupId;
@property(retain, nonatomic) NSString* groupName;
@property(retain, nonatomic) NSArray* ipPermissions;
@property(retain, nonatomic) NSString* ipProtocol;
@property(retain, nonatomic) NSString* sourceSecurityGroupName;
@property(retain, nonatomic) NSString* sourceSecurityGroupOwnerId;
@property(retain, nonatomic) NSNumber* toPort;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)ipPermissionsJSONTransformer;
- (void).cxx_destruct;
@end

