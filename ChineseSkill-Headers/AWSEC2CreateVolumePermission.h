/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2CreateVolumePermission : AWSModel {
	int _group;
	NSString* _userId;
}
@property(assign, nonatomic) int group;
@property(retain, nonatomic) NSString* userId;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)groupJSONTransformer;
- (void).cxx_destruct;
@end
