/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber, NSDate;

@interface AWSCognitoSyncDataset : AWSModel {
	NSDate* _creationDate;
	NSNumber* _dataStorage;
	NSString* _datasetName;
	NSString* _identityId;
	NSString* _lastModifiedBy;
	NSDate* _lastModifiedDate;
	NSNumber* _numRecords;
}
@property(retain, nonatomic) NSDate* creationDate;
@property(retain, nonatomic) NSNumber* dataStorage;
@property(retain, nonatomic) NSString* datasetName;
@property(retain, nonatomic) NSString* identityId;
@property(retain, nonatomic) NSString* lastModifiedBy;
@property(retain, nonatomic) NSDate* lastModifiedDate;
@property(retain, nonatomic) NSNumber* numRecords;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)creationDateJSONTransformer;
+ (id)lastModifiedDateJSONTransformer;
- (void).cxx_destruct;
@end

