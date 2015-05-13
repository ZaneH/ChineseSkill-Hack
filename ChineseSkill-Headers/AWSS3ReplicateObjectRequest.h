/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSDate, NSString, NSDictionary;

@interface AWSS3ReplicateObjectRequest : AWSRequest {
	int _ACL;
	NSString* _bucket;
	NSString* _cacheControl;
	NSString* _contentDisposition;
	NSString* _contentEncoding;
	NSString* _contentLanguage;
	NSString* _contentType;
	NSDate* _expires;
	NSString* _grantFullControl;
	NSString* _grantRead;
	NSString* _grantReadACP;
	NSString* _grantWriteACP;
	NSString* _key;
	NSDictionary* _metadata;
	int _metadataDirective;
	NSString* _replicateSource;
	NSString* _replicateSourceIfMatch;
	NSDate* _replicateSourceIfModifiedSince;
	NSString* _replicateSourceIfNoneMatch;
	NSDate* _replicateSourceIfUnmodifiedSince;
	NSString* _replicateSourceSSECustomerAlgorithm;
	NSString* _replicateSourceSSECustomerKey;
	NSString* _replicateSourceSSECustomerKeyMD5;
	NSString* _replicateSourceSSEKMSKeyId;
	NSString* _SSECustomerAlgorithm;
	NSString* _SSECustomerKey;
	NSString* _SSECustomerKeyMD5;
	int _serverSideEncryption;
	int _storageClass;
	NSString* _websiteRedirectLocation;
}
@property(assign, nonatomic) int ACL;
@property(retain, nonatomic) NSString* SSECustomerAlgorithm;
@property(retain, nonatomic) NSString* SSECustomerKey;
@property(retain, nonatomic) NSString* SSECustomerKeyMD5;
@property(retain, nonatomic) NSString* bucket;
@property(retain, nonatomic) NSString* cacheControl;
@property(retain, nonatomic) NSString* contentDisposition;
@property(retain, nonatomic) NSString* contentEncoding;
@property(retain, nonatomic) NSString* contentLanguage;
@property(retain, nonatomic) NSString* contentType;
@property(retain, nonatomic) NSDate* expires;
@property(retain, nonatomic) NSString* grantFullControl;
@property(retain, nonatomic) NSString* grantRead;
@property(retain, nonatomic) NSString* grantReadACP;
@property(retain, nonatomic) NSString* grantWriteACP;
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSDictionary* metadata;
@property(assign, nonatomic) int metadataDirective;
@property(retain, nonatomic) NSString* replicateSource;
@property(retain, nonatomic) NSString* replicateSourceIfMatch;
@property(retain, nonatomic) NSDate* replicateSourceIfModifiedSince;
@property(retain, nonatomic) NSString* replicateSourceIfNoneMatch;
@property(retain, nonatomic) NSDate* replicateSourceIfUnmodifiedSince;
@property(retain, nonatomic) NSString* replicateSourceSSECustomerAlgorithm;
@property(retain, nonatomic) NSString* replicateSourceSSECustomerKey;
@property(retain, nonatomic) NSString* replicateSourceSSECustomerKeyMD5;
@property(retain, nonatomic) NSString* replicateSourceSSEKMSKeyId;
@property(assign, nonatomic) int serverSideEncryption;
@property(assign, nonatomic) int storageClass;
@property(retain, nonatomic) NSString* websiteRedirectLocation;
+ (id)ACLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)expiresJSONTransformer;
+ (id)metadataDirectiveJSONTransformer;
+ (id)replicateSourceIfModifiedSinceJSONTransformer;
+ (id)replicateSourceIfUnmodifiedSinceJSONTransformer;
+ (id)serverSideEncryptionJSONTransformer;
+ (id)storageClassJSONTransformer;
- (void).cxx_destruct;
@end

