/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2PlacementGroup : AWSModel {
	NSString* _groupName;
	int _state;
	int _strategy;
}
@property(retain, nonatomic) NSString* groupName;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) int strategy;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)stateJSONTransformer;
+ (id)strategyJSONTransformer;
- (void).cxx_destruct;
@end
