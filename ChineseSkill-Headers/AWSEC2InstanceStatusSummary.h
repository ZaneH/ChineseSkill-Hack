/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2InstanceStatusSummary : AWSModel {
	NSArray* _details;
	int _status;
}
@property(retain, nonatomic) NSArray* details;
@property(assign, nonatomic) int status;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)detailsJSONTransformer;
+ (id)statusJSONTransformer;
- (void).cxx_destruct;
@end

