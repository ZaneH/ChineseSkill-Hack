/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSNumber;

@interface AWSS3LifecycleExpiration : AWSModel {
	NSDate* _date;
	NSNumber* _days;
}
@property(retain, nonatomic) NSDate* date;
@property(retain, nonatomic) NSNumber* days;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dateJSONTransformer;
- (void).cxx_destruct;
@end
