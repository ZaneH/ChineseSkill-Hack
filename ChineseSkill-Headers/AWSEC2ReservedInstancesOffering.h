/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString, NSNumber;

@interface AWSEC2ReservedInstancesOffering : AWSModel {
	NSString* _availabilityZone;
	int _currencyCode;
	NSNumber* _duration;
	NSNumber* _fixedPrice;
	int _instanceTenancy;
	int _instanceType;
	NSNumber* _marketplace;
	int _offeringType;
	NSArray* _pricingDetails;
	int _productDescription;
	NSArray* _recurringCharges;
	NSString* _reservedInstancesOfferingId;
	NSNumber* _usagePrice;
}
@property(retain, nonatomic) NSString* availabilityZone;
@property(assign, nonatomic) int currencyCode;
@property(retain, nonatomic) NSNumber* duration;
@property(retain, nonatomic) NSNumber* fixedPrice;
@property(assign, nonatomic) int instanceTenancy;
@property(assign, nonatomic) int instanceType;
@property(retain, nonatomic) NSNumber* marketplace;
@property(assign, nonatomic) int offeringType;
@property(retain, nonatomic) NSArray* pricingDetails;
@property(assign, nonatomic) int productDescription;
@property(retain, nonatomic) NSArray* recurringCharges;
@property(retain, nonatomic) NSString* reservedInstancesOfferingId;
@property(retain, nonatomic) NSNumber* usagePrice;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)currencyCodeJSONTransformer;
+ (id)instanceTenancyJSONTransformer;
+ (id)instanceTypeJSONTransformer;
+ (id)offeringTypeJSONTransformer;
+ (id)pricingDetailsJSONTransformer;
+ (id)productDescriptionJSONTransformer;
+ (id)recurringChargesJSONTransformer;
- (void).cxx_destruct;
@end

