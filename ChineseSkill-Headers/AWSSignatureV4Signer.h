/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSNetworkingRequestInterceptor.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, AWSEndpoint;
@protocol AWSCredentialsProvider;

@interface AWSSignatureV4Signer : XXUnknownSuperclass <AWSNetworkingRequestInterceptor> {
	id<AWSCredentialsProvider> _credentialsProvider;
	AWSEndpoint* _endpoint;
}
@property(retain, nonatomic) id<AWSCredentialsProvider> credentialsProvider;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) AWSEndpoint* endpoint;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)canonicalizedQueryString:(id)string;
+ (id)getV2StringToSign:(id)sign canonicalizedQueryString:(id)string;
+ (id)signerWithCredentialsProvider:(id)credentialsProvider endpoint:(id)endpoint;
- (id)initWithCredentialsProvider:(id)credentialsProvider endpoint:(id)endpoint;
- (void).cxx_destruct;
- (id)getCanonicalizedHeaderString:(id)string;
- (id)getCanonicalizedQueryString:(id)string;
- (id)getCanonicalizedRequest:(id)request path:(id)path query:(id)query headers:(id)headers contentSha256:(id)a256;
- (id)getSignedHeadersString:(id)string;
- (id)getV4DerivedKey:(id)key date:(id)date region:(id)region service:(id)service;
- (id)interceptRequest:(id)request;
- (id)signRequestV4:(id)a4;
- (id)signS3RequestV4:(id)a4;
@end

