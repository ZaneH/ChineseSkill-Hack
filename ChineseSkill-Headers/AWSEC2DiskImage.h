/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, AWSEC2VolumeDetail, AWSEC2DiskImageDetail;

@interface AWSEC2DiskImage : AWSModel {
	NSString* _detail;
	AWSEC2DiskImageDetail* _image;
	AWSEC2VolumeDetail* _volume;
}
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) AWSEC2DiskImageDetail* image;
@property(retain, nonatomic) AWSEC2VolumeDetail* volume;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imageJSONTransformer;
+ (id)volumeJSONTransformer;
- (void).cxx_destruct;
@end

