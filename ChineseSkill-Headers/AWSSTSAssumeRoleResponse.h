/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSSTSAssumedRoleUser, AWSSTSCredentials, NSNumber;

@interface AWSSTSAssumeRoleResponse : AWSModel {
	AWSSTSAssumedRoleUser* _assumedRoleUser;
	AWSSTSCredentials* _credentials;
	NSNumber* _packedPolicySize;
}
@property(retain, nonatomic) AWSSTSAssumedRoleUser* assumedRoleUser;
@property(retain, nonatomic) AWSSTSCredentials* credentials;
@property(retain, nonatomic) NSNumber* packedPolicySize;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)assumedRoleUserJSONTransformer;
+ (id)credentialsJSONTransformer;
- (void).cxx_destruct;
@end

