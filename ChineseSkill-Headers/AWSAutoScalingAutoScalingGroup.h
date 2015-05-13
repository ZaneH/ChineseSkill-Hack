/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSString, NSArray, NSNumber;

@interface AWSAutoScalingAutoScalingGroup : AWSModel {
	NSString* _autoScalingGroupARN;
	NSString* _autoScalingGroupName;
	NSArray* _availabilityZones;
	NSDate* _createdTime;
	NSNumber* _defaultCooldown;
	NSNumber* _desiredCapacity;
	NSArray* _enabledMetrics;
	NSNumber* _healthCheckGracePeriod;
	NSString* _healthCheckType;
	NSArray* _instances;
	NSString* _launchConfigurationName;
	NSArray* _loadBalancerNames;
	NSNumber* _maxSize;
	NSNumber* _minSize;
	NSString* _placementGroup;
	NSString* _status;
	NSArray* _suspendedProcesses;
	NSArray* _tags;
	NSArray* _terminationPolicies;
	NSString* _VPCZoneIdentifier;
}
@property(retain, nonatomic) NSString* VPCZoneIdentifier;
@property(retain, nonatomic) NSString* autoScalingGroupARN;
@property(retain, nonatomic) NSString* autoScalingGroupName;
@property(retain, nonatomic) NSArray* availabilityZones;
@property(retain, nonatomic) NSDate* createdTime;
@property(retain, nonatomic) NSNumber* defaultCooldown;
@property(retain, nonatomic) NSNumber* desiredCapacity;
@property(retain, nonatomic) NSArray* enabledMetrics;
@property(retain, nonatomic) NSNumber* healthCheckGracePeriod;
@property(retain, nonatomic) NSString* healthCheckType;
@property(retain, nonatomic) NSArray* instances;
@property(retain, nonatomic) NSString* launchConfigurationName;
@property(retain, nonatomic) NSArray* loadBalancerNames;
@property(retain, nonatomic) NSNumber* maxSize;
@property(retain, nonatomic) NSNumber* minSize;
@property(retain, nonatomic) NSString* placementGroup;
@property(retain, nonatomic) NSString* status;
@property(retain, nonatomic) NSArray* suspendedProcesses;
@property(retain, nonatomic) NSArray* tags;
@property(retain, nonatomic) NSArray* terminationPolicies;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdTimeJSONTransformer;
+ (id)enabledMetricsJSONTransformer;
+ (id)instancesJSONTransformer;
+ (id)suspendedProcessesJSONTransformer;
+ (id)tagsJSONTransformer;
- (void).cxx_destruct;
@end

