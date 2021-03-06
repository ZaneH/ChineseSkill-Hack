/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class AWSEC2CreateVolumePermissionModifications, NSString, NSArray, NSNumber;

@interface AWSEC2ModifySnapshotAttributeRequest : AWSRequest {
	int _attribute;
	AWSEC2CreateVolumePermissionModifications* _createVolumePermission;
	NSNumber* _dryRun;
	NSArray* _groupNames;
	NSString* _operationType;
	NSString* _snapshotId;
	NSArray* _userIds;
}
@property(assign, nonatomic) int attribute;
@property(retain, nonatomic) AWSEC2CreateVolumePermissionModifications* createVolumePermission;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* groupNames;
@property(retain, nonatomic) NSString* operationType;
@property(retain, nonatomic) NSString* snapshotId;
@property(retain, nonatomic) NSArray* userIds;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)attributeJSONTransformer;
+ (id)createVolumePermissionJSONTransformer;
- (void).cxx_destruct;
@end

