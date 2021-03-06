/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSEndpoint, AWSNetworking, AWSServiceConfiguration;

@interface AWSCognitoSync : AWSService {
	AWSServiceConfiguration* _configuration;
	AWSNetworking* _networking;
	AWSEndpoint* _endpoint;
}
@property(retain, nonatomic) AWSServiceConfiguration* configuration;
@property(retain, nonatomic) AWSEndpoint* endpoint;
@property(retain, nonatomic) AWSNetworking* networking;
+ (id)defaultCognitoSync;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (id)deleteDataset:(id)dataset;
- (id)describeDataset:(id)dataset;
- (id)describeIdentityPoolUsage:(id)usage;
- (id)describeIdentityUsage:(id)usage;
- (id)getIdentityPoolConfiguration:(id)configuration;
- (id)invokeRequest:(id)request HTTPMethod:(int)method URLString:(id)string targetPrefix:(id)prefix operationName:(id)name outputClass:(Class)aClass;
- (id)listDatasets:(id)datasets;
- (id)listIdentityPoolUsage:(id)usage;
- (id)listRecords:(id)records;
- (id)registerDevice:(id)device;
- (id)setIdentityPoolConfiguration:(id)configuration;
- (id)subscribeToDataset:(id)dataset;
- (id)unsubscribeFromDataset:(id)dataset;
- (id)updateRecords:(id)records;
@end

