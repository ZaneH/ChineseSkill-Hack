/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSDynamoDBUpdateGlobalSecondaryIndexAction;

@interface AWSDynamoDBGlobalSecondaryIndexUpdate : AWSModel {
	AWSDynamoDBUpdateGlobalSecondaryIndexAction* _update;
}
@property(retain, nonatomic) AWSDynamoDBUpdateGlobalSecondaryIndexAction* update;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)updateJSONTransformer;
- (void).cxx_destruct;
@end

