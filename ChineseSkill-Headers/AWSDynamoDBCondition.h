/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSDynamoDBCondition : AWSModel {
	NSArray* _attributeValueList;
	int _comparisonOperator;
}
@property(retain, nonatomic) NSArray* attributeValueList;
@property(assign, nonatomic) int comparisonOperator;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)attributeValueListJSONTransformer;
+ (id)comparisonOperatorJSONTransformer;
- (void).cxx_destruct;
@end

