/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2VpnStaticRoute : AWSModel {
	NSString* _destinationCidrBlock;
	int _source;
	int _state;
}
@property(retain, nonatomic) NSString* destinationCidrBlock;
@property(assign, nonatomic) int source;
@property(assign, nonatomic) int state;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)sourceJSONTransformer;
+ (id)stateJSONTransformer;
- (void).cxx_destruct;
@end
