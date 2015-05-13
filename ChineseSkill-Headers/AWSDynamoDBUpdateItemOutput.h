/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSDynamoDBConsumedCapacity, AWSDynamoDBItemCollectionMetrics, NSDictionary;

@interface AWSDynamoDBUpdateItemOutput : AWSModel {
	NSDictionary* _attributes;
	AWSDynamoDBConsumedCapacity* _consumedCapacity;
	AWSDynamoDBItemCollectionMetrics* _itemCollectionMetrics;
}
@property(retain, nonatomic) NSDictionary* attributes;
@property(retain, nonatomic) AWSDynamoDBConsumedCapacity* consumedCapacity;
@property(retain, nonatomic) AWSDynamoDBItemCollectionMetrics* itemCollectionMetrics;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)attributesJSONTransformer;
+ (id)consumedCapacityJSONTransformer;
+ (id)itemCollectionMetricsJSONTransformer;
- (void).cxx_destruct;
@end
