/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2DescribeNetworkInterfacesResult : AWSModel {
	NSArray* _networkInterfaces;
}
@property(retain, nonatomic) NSArray* networkInterfaces;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)networkInterfacesJSONTransformer;
- (void).cxx_destruct;
@end

