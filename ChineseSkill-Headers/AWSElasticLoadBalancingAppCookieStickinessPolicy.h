/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSElasticLoadBalancingAppCookieStickinessPolicy : AWSModel {
	NSString* _cookieName;
	NSString* _policyName;
}
@property(retain, nonatomic) NSString* cookieName;
@property(retain, nonatomic) NSString* policyName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

