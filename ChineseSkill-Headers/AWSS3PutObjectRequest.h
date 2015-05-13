/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSDate, NSString, NSDictionary, NSNumber;

@interface AWSS3PutObjectRequest : AWSRequest {
	int _ACL;
	id _body;
	NSString* _bucket;
	NSString* _cacheControl;
	NSString* _contentDisposition;
	NSString* _contentEncoding;
	NSString* _contentLanguage;
	NSNumber* _contentLength;
	NSString* _contentMD5;
	NSString* _contentType;
	NSDate* _expires;
	NSString* _grantFullControl;
	NSString* _grantRead;
	NSString* _grantReadACP;
	NSString* _grantWriteACP;
	NSString* _key;
	NSDictionary* _metadata;
	NSString* _SSECustomerAlgorithm;
	NSString* _SSECustomerKey;
	NSString* _SSECustomerKeyMD5;
	NSString* _SSEKMSKeyId;
	int _serverSideEncryption;
	int _storageClass;
	NSString* _websiteRedirectLocation;
}
@property(assign, nonatomic) int ACL;
@property(retain, nonatomic) NSString* SSECustomerAlgorithm;
@property(retain, nonatomic) NSString* SSECustomerKey;
@property(retain, nonatomic) NSString* SSECustomerKeyMD5;
@property(retain, nonatomic) NSString* SSEKMSKeyId;
@property(retain, nonatomic) id body;
@property(retain, nonatomic) NSString* bucket;
@property(retain, nonatomic) NSString* cacheControl;
@property(retain, nonatomic) NSString* contentDisposition;
@property(retain, nonatomic) NSString* contentEncoding;
@property(retain, nonatomic) NSString* contentLanguage;
@property(retain, nonatomic) NSNumber* contentLength;
@property(retain, nonatomic) NSString* contentMD5;
@property(retain, nonatomic) NSString* contentType;
@property(retain, nonatomic) NSDate* expires;
@property(retain, nonatomic) NSString* grantFullControl;
@property(retain, nonatomic) NSString* grantRead;
@property(retain, nonatomic) NSString* grantReadACP;
@property(retain, nonatomic) NSString* grantWriteACP;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSDictionary* metadata;
@property(assign, nonatomic) int serverSideEncryption;
@property(assign, nonatomic) int storageClass;
@property(retain, nonatomic) NSString* websiteRedirectLocation;
+ (id)ACLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)expiresJSONTransformer;
+ (id)serverSideEncryptionJSONTransformer;
+ (id)storageClassJSONTransformer;
- (void).cxx_destruct;
@end

