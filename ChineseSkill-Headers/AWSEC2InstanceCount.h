/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSNumber;

@interface AWSEC2InstanceCount : AWSModel {
	NSNumber* _instanceCount;
	int _state;
}
@property(retain, nonatomic) NSNumber* instanceCount;
@property(assign, nonatomic) int state;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)stateJSONTransformer;
- (void).cxx_destruct;
@end

