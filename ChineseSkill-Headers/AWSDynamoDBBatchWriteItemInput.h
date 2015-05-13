/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSDictionary;

@interface AWSDynamoDBBatchWriteItemInput : AWSRequest {
	NSDictionary* _requestItems;
	int _returnConsumedCapacity;
	int _returnItemCollectionMetrics;
}
@property(retain, nonatomic) NSDictionary* requestItems;
@property(assign, nonatomic) int returnConsumedCapacity;
@property(assign, nonatomic) int returnItemCollectionMetrics;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)requestItemsJSONTransformer;
+ (id)returnConsumedCapacityJSONTransformer;
+ (id)returnItemCollectionMetricsJSONTransformer;
- (void).cxx_destruct;
@end

