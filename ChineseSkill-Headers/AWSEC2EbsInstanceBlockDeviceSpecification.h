/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSEC2EbsInstanceBlockDeviceSpecification : AWSModel {
	NSNumber* _deleteOnTermination;
	NSString* _volumeId;
}
@property(retain, nonatomic) NSNumber* deleteOnTermination;
@property(retain, nonatomic) NSString* volumeId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

