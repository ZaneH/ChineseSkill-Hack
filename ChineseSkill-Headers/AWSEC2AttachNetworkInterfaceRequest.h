/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2AttachNetworkInterfaceRequest : AWSRequest {
	NSNumber* _deviceIndex;
	NSNumber* _dryRun;
	NSString* _instanceId;
	NSString* _networkInterfaceId;
}
@property(retain, nonatomic) NSNumber* deviceIndex;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) NSString* networkInterfaceId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

