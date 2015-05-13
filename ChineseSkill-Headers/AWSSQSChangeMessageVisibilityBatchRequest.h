/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray;

@interface AWSSQSChangeMessageVisibilityBatchRequest : AWSRequest {
	NSArray* _entries;
	NSString* _queueUrl;
}
@property(retain, nonatomic) NSArray* entries;
@property(retain, nonatomic) NSString* queueUrl;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)entriesJSONTransformer;
- (void).cxx_destruct;
@end

