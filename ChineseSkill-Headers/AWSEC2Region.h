/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2Region : AWSModel {
	NSString* _endpoint;
	NSString* _regionName;
}
@property(retain, nonatomic) NSString* endpoint;
@property(retain, nonatomic) NSString* regionName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

