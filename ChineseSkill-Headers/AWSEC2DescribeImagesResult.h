/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSEC2DescribeImagesResult : AWSModel {
	NSArray* _images;
}
@property(retain, nonatomic) NSArray* images;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
- (void).cxx_destruct;
@end

