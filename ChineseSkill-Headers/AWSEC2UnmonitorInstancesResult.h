/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2UnmonitorInstancesResult : AWSModel {
	NSArray* _instanceMonitorings;
}
@property(retain, nonatomic) NSArray* instanceMonitorings;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceMonitoringsJSONTransformer;
- (void).cxx_destruct;
@end

