/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSS3Grantee : AWSModel {
	NSString* _displayName;
	NSString* _emailAddress;
	NSString* _ID;
	int _type;
	NSString* _URI;
}
@property(retain, nonatomic) NSString* ID;
@property(retain, nonatomic) NSString* URI;
@property(retain, nonatomic) NSString* displayName;
@property(retain, nonatomic) NSString* emailAddress;
@property(assign, nonatomic) int type;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)typeJSONTransformer;
- (void).cxx_destruct;
@end

