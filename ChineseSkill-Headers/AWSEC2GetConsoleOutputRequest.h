/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2GetConsoleOutputRequest : AWSRequest {
	NSNumber* _dryRun;
	NSString* _instanceId;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* instanceId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
