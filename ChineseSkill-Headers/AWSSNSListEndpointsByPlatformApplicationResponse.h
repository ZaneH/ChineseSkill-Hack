/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSSNSListEndpointsByPlatformApplicationResponse : AWSModel {
	NSArray* _endpoints;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSArray* endpoints;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)endpointsJSONTransformer;
- (void).cxx_destruct;
@end

