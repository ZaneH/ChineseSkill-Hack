/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary;

@interface AWSDynamoDBPutItemInput : AWSRequest {
	int _conditionalOperator;
	NSDictionary* _expected;
	NSDictionary* _item;
	int _returnConsumedCapacity;
	int _returnItemCollectionMetrics;
	int _returnValues;
	NSString* _tableName;
}
@property(assign, nonatomic) int conditionalOperator;
@property(retain, nonatomic) NSDictionary* expected;
@property(retain, nonatomic) NSDictionary* item;
@property(assign, nonatomic) int returnConsumedCapacity;
@property(assign, nonatomic) int returnItemCollectionMetrics;
@property(assign, nonatomic) int returnValues;
@property(retain, nonatomic) NSString* tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)conditionalOperatorJSONTransformer;
+ (id)expectedJSONTransformer;
+ (id)itemJSONTransformer;
+ (id)returnConsumedCapacityJSONTransformer;
+ (id)returnItemCollectionMetricsJSONTransformer;
+ (id)returnValuesJSONTransformer;
- (void).cxx_destruct;
@end

