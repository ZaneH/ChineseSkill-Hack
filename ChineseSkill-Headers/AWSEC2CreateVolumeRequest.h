/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2CreateVolumeRequest : AWSRequest {
	NSString* _availabilityZone;
	NSNumber* _dryRun;
	NSNumber* _encrypted;
	NSNumber* _iops;
	NSNumber* _size;
	NSString* _snapshotId;
	int _volumeType;
}
@property(retain, nonatomic) NSString* availabilityZone;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSNumber* encrypted;
@property(retain, nonatomic) NSNumber* iops;
@property(retain, nonatomic) NSNumber* size;
@property(retain, nonatomic) NSString* snapshotId;
@property(assign, nonatomic) int volumeType;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)volumeTypeJSONTransformer;
- (void).cxx_destruct;
@end

