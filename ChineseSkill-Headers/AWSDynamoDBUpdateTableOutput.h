/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSDynamoDBTableDescription;

@interface AWSDynamoDBUpdateTableOutput : AWSModel {
	AWSDynamoDBTableDescription* _tableDescription;
}
@property(retain, nonatomic) AWSDynamoDBTableDescription* tableDescription;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)tableDescriptionJSONTransformer;
- (void).cxx_destruct;
@end

