/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2InstanceExportDetails : AWSModel {
	NSString* _instanceId;
	int _targetEnvironment;
}
@property(retain, nonatomic) NSString* instanceId;
@property(assign, nonatomic) int targetEnvironment;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)targetEnvironmentJSONTransformer;
- (void).cxx_destruct;
@end

