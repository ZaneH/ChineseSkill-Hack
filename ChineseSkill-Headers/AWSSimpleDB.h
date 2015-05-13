/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSNetworking, AWSServiceConfiguration;

@interface AWSSimpleDB : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultSimpleDB;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)batchDeleteAttributes:(id)attributes;
- (id)batchPutAttributes:(id)attributes;
- (id)createDomain:(id)domain;
- (id)deleteAttributes:(id)attributes;
- (id)deleteDomain:(id)domain;
- (id)domainMetadata:(id)metadata;
- (id)getAttributes:(id)attributes;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)listDomains:(id)domains;
- (id)putAttributes:(id)attributes;
- (id)select:(id)select;
@end

