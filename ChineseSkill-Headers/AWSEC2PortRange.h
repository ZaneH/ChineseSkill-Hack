/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSNumber;

@interface AWSEC2PortRange : AWSModel {
	NSNumber* _from;
	NSNumber* _to;
}
@property(retain, nonatomic) NSNumber* from;
@property(retain, nonatomic) NSNumber* to;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

