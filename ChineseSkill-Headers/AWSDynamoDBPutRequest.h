/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDictionary;

@interface AWSDynamoDBPutRequest : AWSModel {
	NSDictionary* _item;
}
@property(retain, nonatomic) NSDictionary* item;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)itemJSONTransformer;
- (void).cxx_destruct;
@end

