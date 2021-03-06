/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSSNSListTopicsResponse : AWSModel {
	NSString* _nextToken;
	NSArray* _topics;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* topics;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)topicsJSONTransformer;
- (void).cxx_destruct;
@end

