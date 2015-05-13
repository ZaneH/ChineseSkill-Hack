/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSEC2SpotInstanceStateFault, AWSEC2SpotInstanceStatus, NSDate, NSString, NSArray, AWSEC2LaunchSpecification;

@interface AWSEC2SpotInstanceRequest : AWSModel {
	NSString* _availabilityZoneGroup;
	NSDate* _createTime;
	AWSEC2SpotInstanceStateFault* _fault;
	NSString* _instanceId;
	NSString* _launchGroup;
	AWSEC2LaunchSpecification* _launchSpecification;
	NSString* _launchedAvailabilityZone;
	int _productDescription;
	NSString* _spotInstanceRequestId;
	NSString* _spotPrice;
	int _state;
	AWSEC2SpotInstanceStatus* _status;
	NSArray* _tags;
	int _type;
	NSDate* _validFrom;
	NSDate* _validUntil;
}
@property(retain, nonatomic) NSString* availabilityZoneGroup;
@property(retain, nonatomic) NSDate* createTime;
@property(retain, nonatomic) AWSEC2SpotInstanceStateFault* fault;
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) NSString* launchGroup;
@property(retain, nonatomic) AWSEC2LaunchSpecification* launchSpecification;
@property(retain, nonatomic) NSString* launchedAvailabilityZone;
@property(assign, nonatomic) int productDescription;
@property(retain, nonatomic) NSString* spotInstanceRequestId;
@property(retain, nonatomic) NSString* spotPrice;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) AWSEC2SpotInstanceStatus* status;
@property(retain, nonatomic) NSArray* tags;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSDate* validFrom;
@property(retain, nonatomic) NSDate* validUntil;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)createTimeJSONTransformer;
+ (id)faultJSONTransformer;
+ (id)launchSpecificationJSONTransformer;
+ (id)productDescriptionJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)validFromJSONTransformer;
+ (id)validUntilJSONTransformer;
- (void).cxx_destruct;
@end

