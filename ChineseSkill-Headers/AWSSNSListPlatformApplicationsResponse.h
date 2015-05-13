/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray;

@interface AWSSNSListPlatformApplicationsResponse : AWSModel {
	NSString* _nextToken;
	NSArray* _platformApplications;
}
@property(retain, nonatomic) NSString* nextToken;
@property(retain, nonatomic) NSArray* platformApplications;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)platformApplicationsJSONTransformer;
- (void).cxx_destruct;
@end
