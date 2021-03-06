/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate;

@interface AWSS3GetPreSignedURLRequest : XXUnknownSuperclass {
	NSString* _bucket;
	NSString* _key;
	int _HTTPMethod;
	NSDate* _expires;
	NSString* _versionId;
	NSString* _contentType;
	double _minimumCredentialsExpirationInterval;
}
@property(assign, nonatomic) int HTTPMethod;
@property(retain, nonatomic) NSString* bucket;
@property(retain, nonatomic) NSString* contentType;
@property(retain, nonatomic) NSDate* expires;
@property(retain, nonatomic) NSString* key;
@property(assign, nonatomic) double minimumCredentialsExpirationInterval;
@property(retain, nonatomic) NSString* versionId;
- (id)init;
- (void).cxx_destruct;
@end

