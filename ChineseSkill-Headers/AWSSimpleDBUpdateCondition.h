/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSNumber;

@interface AWSSimpleDBUpdateCondition : AWSModel {
	NSNumber* _exists;
	NSString* _name;
	NSString* _value;
}
@property(retain, nonatomic) NSNumber* exists;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* value;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

