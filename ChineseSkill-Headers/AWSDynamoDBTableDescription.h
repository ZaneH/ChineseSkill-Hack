/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, AWSDynamoDBProvisionedThroughputDescription, NSDate, NSArray, NSNumber;

@interface AWSDynamoDBTableDescription : AWSModel {
	NSArray* _attributeDefinitions;
	NSDate* _creationDateTime;
	NSArray* _globalSecondaryIndexes;
	NSNumber* _itemCount;
	NSArray* _keySchema;
	NSArray* _localSecondaryIndexes;
	AWSDynamoDBProvisionedThroughputDescription* _provisionedThroughput;
	NSString* _tableName;
	NSNumber* _tableSizeBytes;
	int _tableStatus;
}
@property(retain, nonatomic) NSArray* attributeDefinitions;
@property(retain, nonatomic) NSDate* creationDateTime;
@property(retain, nonatomic) NSArray* globalSecondaryIndexes;
@property(retain, nonatomic) NSNumber* itemCount;
@property(retain, nonatomic) NSArray* keySchema;
@property(retain, nonatomic) NSArray* localSecondaryIndexes;
@property(retain, nonatomic) AWSDynamoDBProvisionedThroughputDescription* provisionedThroughput;
@property(retain, nonatomic) NSString* tableName;
@property(retain, nonatomic) NSNumber* tableSizeBytes;
@property(assign, nonatomic) int tableStatus;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)attributeDefinitionsJSONTransformer;
+ (id)creationDateTimeJSONTransformer;
+ (id)globalSecondaryIndexesJSONTransformer;
+ (id)keySchemaJSONTransformer;
+ (id)localSecondaryIndexesJSONTransformer;
+ (id)provisionedThroughputJSONTransformer;
+ (id)tableStatusJSONTransformer;
- (void).cxx_destruct;
@end

