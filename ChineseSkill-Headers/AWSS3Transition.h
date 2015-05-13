/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSDate, NSNumber;

@interface AWSS3Transition : AWSModel {
	NSDate* _date;
	NSNumber* _days;
	int _storageClass;
}
@property(retain, nonatomic) NSDate* date;
@property(retain, nonatomic) NSNumber* days;
@property(assign, nonatomic) int storageClass;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dateJSONTransformer;
+ (id)storageClassJSONTransformer;
- (void).cxx_destruct;
@end

