/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSAutoScalingFilter : AWSModel {
	NSString* _name;
	NSArray* _values;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSArray* values;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

