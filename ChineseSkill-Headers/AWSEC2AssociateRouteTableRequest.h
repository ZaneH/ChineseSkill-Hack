/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2AssociateRouteTableRequest : AWSRequest {
	NSNumber* _dryRun;
	NSString* _routeTableId;
	NSString* _subnetId;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* routeTableId;
@property(retain, nonatomic) NSString* subnetId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

