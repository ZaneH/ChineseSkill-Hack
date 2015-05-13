/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSNumber;

@interface AWSS3CORSRule : AWSModel {
	NSArray* _allowedHeaders;
	NSArray* _allowedMethods;
	NSArray* _allowedOrigins;
	NSArray* _exposeHeaders;
	NSNumber* _maxAgeSeconds;
}
@property(retain, nonatomic) NSArray* allowedHeaders;
@property(retain, nonatomic) NSArray* allowedMethods;
@property(retain, nonatomic) NSArray* allowedOrigins;
@property(retain, nonatomic) NSArray* exposeHeaders;
@property(retain, nonatomic) NSNumber* maxAgeSeconds;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end

