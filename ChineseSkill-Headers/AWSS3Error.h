/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSS3Error : AWSModel {
	NSString* _code;
	NSString* _key;
	NSString* _message;
	NSString* _versionId;
}
@property(retain, nonatomic) NSString* code;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) NSString* versionId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

