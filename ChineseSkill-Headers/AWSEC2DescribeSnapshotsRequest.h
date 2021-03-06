/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSNumber;

@interface AWSEC2DescribeSnapshotsRequest : AWSRequest {
	NSNumber* _dryRun;
	NSArray* _filters;
	NSArray* _ownerIds;
	NSArray* _restorableByUserIds;
	NSArray* _snapshotIds;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* filters;
@property(retain, nonatomic) NSArray* ownerIds;
@property(retain, nonatomic) NSArray* restorableByUserIds;
@property(retain, nonatomic) NSArray* snapshotIds;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end

