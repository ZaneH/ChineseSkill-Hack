/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, NSNumber;

@interface AWSEC2CreateImageRequest : AWSRequest {
	NSArray* _blockDeviceMappings;
	NSString* _detail;
	NSNumber* _dryRun;
	NSString* _instanceId;
	NSString* _name;
	NSNumber* _noReboot;
}
@property(retain, nonatomic) NSArray* blockDeviceMappings;
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* instanceId;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSNumber* noReboot;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)blockDeviceMappingsJSONTransformer;
- (void).cxx_destruct;
@end

