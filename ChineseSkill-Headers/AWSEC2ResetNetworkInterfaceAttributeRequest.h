/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2ResetNetworkInterfaceAttributeRequest : AWSRequest {
	NSNumber* _dryRun;
	NSString* _networkInterfaceId;
	NSString* _sourceDestCheck;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* networkInterfaceId;
@property(retain, nonatomic) NSString* sourceDestCheck;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
