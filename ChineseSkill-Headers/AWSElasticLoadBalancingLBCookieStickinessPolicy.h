/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSElasticLoadBalancingLBCookieStickinessPolicy : AWSModel {
	NSNumber* _cookieExpirationPeriod;
	NSString* _policyName;
}
@property(retain, nonatomic) NSNumber* cookieExpirationPeriod;
@property(retain, nonatomic) NSString* policyName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
