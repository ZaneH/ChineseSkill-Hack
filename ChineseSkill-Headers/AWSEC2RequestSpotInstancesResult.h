/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2RequestSpotInstancesResult : AWSModel {
	NSArray* _spotInstanceRequests;
}
@property(retain, nonatomic) NSArray* spotInstanceRequests;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)spotInstanceRequestsJSONTransformer;
- (void).cxx_destruct;
@end

