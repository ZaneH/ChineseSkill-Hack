/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2CancelConversionRequest : AWSRequest {
	NSString* _conversionTaskId;
	NSNumber* _dryRun;
	NSString* _reasonMessage;
}
@property(retain, nonatomic) NSString* conversionTaskId;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* reasonMessage;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

