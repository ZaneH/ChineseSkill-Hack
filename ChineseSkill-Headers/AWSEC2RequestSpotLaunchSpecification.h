/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2IamInstanceProfileSpecification, AWSEC2SpotPlacement, NSString, AWSEC2RunInstancesMonitoringEnabled, NSArray, NSNumber;

@interface AWSEC2RequestSpotLaunchSpecification : AWSModel {
	NSString* _addressingType;
	NSArray* _blockDeviceMappings;
	NSNumber* _ebsOptimized;
	AWSEC2IamInstanceProfileSpecification* _iamInstanceProfile;
	NSString* _imageId;
	int _instanceType;
	NSString* _kernelId;
	NSString* _keyName;
	AWSEC2RunInstancesMonitoringEnabled* _monitoring;
	NSArray* _networkInterfaces;
	AWSEC2SpotPlacement* _placement;
	NSString* _ramdiskId;
	NSArray* _securityGroupIds;
	NSArray* _securityGroups;
	NSString* _subnetId;
	NSString* _userData;
}
@property(retain, nonatomic) NSString* addressingType;
@property(retain, nonatomic) NSArray* blockDeviceMappings;
@property(retain, nonatomic) NSNumber* ebsOptimized;
@property(retain, nonatomic) AWSEC2IamInstanceProfileSpecification* iamInstanceProfile;
@property(retain, nonatomic) NSString* imageId;
@property(assign, nonatomic) int instanceType;
@property(retain, nonatomic) NSString* kernelId;
@property(retain, nonatomic) NSString* keyName;
@property(retain, nonatomic) AWSEC2RunInstancesMonitoringEnabled* monitoring;
@property(retain, nonatomic) NSArray* networkInterfaces;
@property(retain, nonatomic) AWSEC2SpotPlacement* placement;
@property(retain, nonatomic) NSString* ramdiskId;
@property(retain, nonatomic) NSArray* securityGroupIds;
@property(retain, nonatomic) NSArray* securityGroups;
@property(retain, nonatomic) NSString* subnetId;
@property(retain, nonatomic) NSString* userData;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)blockDeviceMappingsJSONTransformer;
+ (id)iamInstanceProfileJSONTransformer;
+ (id)instanceTypeJSONTransformer;
+ (id)monitoringJSONTransformer;
+ (id)networkInterfacesJSONTransformer;
+ (id)placementJSONTransformer;
- (void).cxx_destruct;
@end
