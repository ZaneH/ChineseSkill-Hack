/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2CreateSnapshotRequest : AWSRequest {
	NSString* _detail;
	NSNumber* _dryRun;
	NSString* _volumeId;
}
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* volumeId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

