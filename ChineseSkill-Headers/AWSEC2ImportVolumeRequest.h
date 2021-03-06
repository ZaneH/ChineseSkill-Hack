/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class AWSEC2VolumeDetail, NSString, AWSEC2DiskImageDetail, NSNumber;

@interface AWSEC2ImportVolumeRequest : AWSRequest {
	NSString* _availabilityZone;
	NSString* _detail;
	NSNumber* _dryRun;
	AWSEC2DiskImageDetail* _image;
	AWSEC2VolumeDetail* _volume;
}
@property(retain, nonatomic) NSString* availabilityZone;
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) AWSEC2DiskImageDetail* image;
@property(retain, nonatomic) AWSEC2VolumeDetail* volume;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imageJSONTransformer;
+ (id)volumeJSONTransformer;
- (void).cxx_destruct;
@end

