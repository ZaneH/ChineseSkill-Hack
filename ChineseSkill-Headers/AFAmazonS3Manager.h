/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AFHTTPRequestOperationManager.h"

@class NSURL, AFAmazonS3RequestSerializer;
@protocol AFURLRequestSerialization;

__attribute__((visibility("hidden")))
@interface AFAmazonS3Manager : AFHTTPRequestOperationManager {
	NSURL* _s3_baseURL;
}
@property(retain, nonatomic) NSURL* baseURL;
@property(retain, nonatomic) AFAmazonS3RequestSerializer<AFURLRequestSerialization>* requestSerializer;
+ (id)keyPathsForValuesAffectingBaseURL;
- (id)initWithAccessKeyID:(id)accessKeyID secret:(id)secret;
- (id)initWithBaseURL:(id)baseURL;
- (void).cxx_destruct;
- (void)deleteBucket:(id)bucket success:(id)success failure:(id)failure;
- (void)deleteObjectWithPath:(id)path success:(id)success failure:(id)failure;
- (void)enqueueS3RequestOperationWithMethod:(id)method path:(id)path parameters:(id)parameters success:(id)success failure:(id)failure;
- (void)getBucket:(id)bucket success:(id)success failure:(id)failure;
- (void)getObjectWithPath:(id)path outputStream:(id)stream progress:(id)progress success:(id)success failure:(id)failure;
- (void)getObjectWithPath:(id)path progress:(id)progress success:(id)success failure:(id)failure;
- (void)getServiceWithSuccess:(id)success failure:(id)failure;
- (void)headObjectWithPath:(id)path success:(id)success failure:(id)failure;
- (void)postObjectWithFile:(id)file destinationPath:(id)path parameters:(id)parameters progress:(id)progress success:(id)success failure:(id)failure;
- (void)putBucket:(id)bucket parameters:(id)parameters success:(id)success failure:(id)failure;
- (void)putObjectWithFile:(id)file destinationPath:(id)path parameters:(id)parameters progress:(id)progress success:(id)success failure:(id)failure;
- (void)setObjectWithMethod:(id)method file:(id)file destinationPath:(id)path parameters:(id)parameters progress:(id)progress success:(id)success failure:(id)failure;
@end

