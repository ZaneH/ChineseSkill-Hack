/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray;

@interface AWSSimpleDBBatchPutAttributesRequest : AWSRequest {
	NSString* _domainName;
	NSArray* _items;
}
@property(retain, nonatomic) NSString* domainName;
@property(retain, nonatomic) NSArray* items;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)itemsJSONTransformer;
- (void).cxx_destruct;
@end

