/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString, NSNumber;

@interface AWSCognitoSyncListRecordsResponse : AWSModel {
	NSNumber* _count;
	NSNumber* _datasetDeletedAfterRequestedSyncCount;
	NSNumber* _datasetExists;
	NSNumber* _datasetSyncCount;
	NSString* _lastModifiedBy;
	NSArray* _mergedDatasetNames;
	NSString* _nextToken;
	NSArray* _records;
	NSString* _syncSessionToken;
}
@property(retain, nonatomic) NSNumber* count;
@property(retain, nonatomic) NSNumber* datasetDeletedAfterRequestedSyncCount;
@property(retain, nonatomic) NSNumber* datasetExists;
@property(retain, nonatomic) NSNumber* datasetSyncCount;
@property(retain, nonatomic) NSString* lastModifiedBy;
@property(retain, nonatomic) NSArray* mergedDatasetNames;
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* records;
@property(retain, nonatomic) NSString* syncSessionToken;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)recordsJSONTransformer;
- (void).cxx_destruct;
@end
