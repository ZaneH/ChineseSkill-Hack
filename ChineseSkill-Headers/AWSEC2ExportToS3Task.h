/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2ExportToS3Task : AWSModel {
	int _containerFormat;
	int _diskImageFormat;
	NSString* _s3Bucket;
	NSString* _s3Key;
}
@property(assign, nonatomic) int containerFormat;
@property(assign, nonatomic) int diskImageFormat;
@property(retain, nonatomic) NSString* s3Bucket;
@property(retain, nonatomic) NSString* s3Key;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)containerFormatJSONTransformer;
+ (id)diskImageFormatJSONTransformer;
- (void).cxx_destruct;
@end

