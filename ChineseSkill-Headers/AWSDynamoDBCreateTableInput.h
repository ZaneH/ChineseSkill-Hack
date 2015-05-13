/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, AWSDynamoDBProvisionedThroughput;

@interface AWSDynamoDBCreateTableInput : AWSRequest {
	NSArray* _attributeDefinitions;
	NSArray* _globalSecondaryIndexes;
	NSArray* _keySchema;
	NSArray* _localSecondaryIndexes;
	AWSDynamoDBProvisionedThroughput* _provisionedThroughput;
	NSString* _tableName;
}
@property(retain, nonatomic) NSArray* attributeDefinitions;
@property(retain, nonatomic) NSArray* globalSecondaryIndexes;
@property(retain, nonatomic) NSArray* keySchema;
@property(retain, nonatomic) NSArray* localSecondaryIndexes;
@property(retain, nonatomic) AWSDynamoDBProvisionedThroughput* provisionedThroughput;
@property(retain, nonatomic) NSString* tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)attributeDefinitionsJSONTransformer;
+ (id)globalSecondaryIndexesJSONTransformer;
+ (id)keySchemaJSONTransformer;
+ (id)localSecondaryIndexesJSONTransformer;
+ (id)provisionedThroughputJSONTransformer;
- (void).cxx_destruct;
@end

