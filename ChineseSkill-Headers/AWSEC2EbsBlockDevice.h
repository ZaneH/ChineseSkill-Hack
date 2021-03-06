/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSEC2EbsBlockDevice : AWSModel {
	NSNumber* _deleteOnTermination;
	NSNumber* _encrypted;
	NSNumber* _iops;
	NSString* _snapshotId;
	NSNumber* _volumeSize;
	int _volumeType;
}
@property(retain, nonatomic) NSNumber* deleteOnTermination;
@property(retain, nonatomic) NSNumber* encrypted;
@property(retain, nonatomic) NSNumber* iops;
@property(retain, nonatomic) NSString* snapshotId;
@property(retain, nonatomic) NSNumber* volumeSize;
@property(assign, nonatomic) int volumeType;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)volumeTypeJSONTransformer;
- (void).cxx_destruct;
@end

