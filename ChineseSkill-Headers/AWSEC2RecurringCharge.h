/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSNumber;

@interface AWSEC2RecurringCharge : AWSModel {
	NSNumber* _amount;
	int _frequency;
}
@property(retain, nonatomic) NSNumber* amount;
@property(assign, nonatomic) int frequency;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)frequencyJSONTransformer;
- (void).cxx_destruct;
@end

