/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSSQSListQueuesResult : AWSModel {
	NSArray* _queueUrls;
}
@property(retain, nonatomic) NSArray* queueUrls;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
