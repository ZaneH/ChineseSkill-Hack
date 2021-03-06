/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWSDynamoDBQueryInput : AWSRequest {
	NSArray* _attributesToGet;
	int _conditionalOperator;
	NSNumber* _consistentRead;
	NSDictionary* _exclusiveStartKey;
	NSString* _indexName;
	NSDictionary* _keyConditions;
	NSNumber* _limit;
	NSDictionary* _queryFilter;
	int _returnConsumedCapacity;
	NSNumber* _scanIndexForward;
	int _select;
	NSString* _tableName;
}
@property(retain, nonatomic) NSArray* attributesToGet;
@property(assign, nonatomic) int conditionalOperator;
@property(retain, nonatomic) NSNumber* consistentRead;
@property(retain, nonatomic) NSDictionary* exclusiveStartKey;
@property(retain, nonatomic) NSString* indexName;
@property(retain, nonatomic) NSDictionary* keyConditions;
@property(retain, nonatomic) NSNumber* limit;
@property(retain, nonatomic) NSDictionary* queryFilter;
@property(assign, nonatomic) int returnConsumedCapacity;
@property(retain, nonatomic) NSNumber* scanIndexForward;
@property(assign, nonatomic) int select;
@property(retain, nonatomic) NSString* tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)conditionalOperatorJSONTransformer;
+ (id)exclusiveStartKeyJSONTransformer;
+ (id)keyConditionsJSONTransformer;
+ (id)queryFilterJSONTransformer;
+ (id)returnConsumedCapacityJSONTransformer;
+ (id)selectJSONTransformer;
- (void).cxx_destruct;
@end

