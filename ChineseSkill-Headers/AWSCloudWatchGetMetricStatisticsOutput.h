/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSCloudWatchGetMetricStatisticsOutput : AWSModel {
	NSArray* _datapoints;
	NSString* _label;
}
@property(retain, nonatomic) NSArray* datapoints;
@property(retain, nonatomic) NSString* label;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)datapointsJSONTransformer;
- (void).cxx_destruct;
@end

