/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSService.h"

@class AWSServiceConfiguration, NSString, AWSCognitoSQLiteManager, UICKeyChainStore, AWSCognitoSync, AWSCognitoCredentialsProvider;

@interface AWSCognito : AWSService {
	BOOL _synchronizeOnWiFiOnly;
	AWSServiceConfiguration* _configuration;
	id _conflictHandler;
	id _datasetDeletedHandler;
	id _datasetMergedHandler;
	NSString* _deviceId;
	unsigned _synchronizeRetries;
	AWSCognitoSQLiteManager* _sqliteManager;
	AWSCognitoSync* _cognitoService;
	AWSCognitoCredentialsProvider* _cognitoCredentialsProvider;
	UICKeyChainStore* _keychain;
}
@property(retain, nonatomic) AWSCognitoCredentialsProvider* cognitoCredentialsProvider;
@property(retain, nonatomic) AWSCognitoSync* cognitoService;
@property(readonly, assign, nonatomic) AWSServiceConfiguration* configuration;
@property(copy, nonatomic) id conflictHandler;
@property(copy, nonatomic) id datasetDeletedHandler;
@property(copy, nonatomic) id datasetMergedHandler;
@property(retain, nonatomic) NSString* deviceId;
@property(retain, nonatomic) UICKeyChainStore* keychain;
@property(retain, nonatomic) AWSCognitoSQLiteManager* sqliteManager;
@property(assign, nonatomic) BOOL synchronizeOnWiFiOnly;
@property(assign, nonatomic) unsigned synchronizeRetries;
+ (id)cognitoDeviceId;
+ (id)defaultCognito;
+ (id)defaultConflictHandler;
+ (void)initialize;
- (id)initWithConfiguration:(id)configuration;
- (void).cxx_destruct;
- (void)dealloc;
- (void)identityChanged:(id)changed;
- (id)listDatasets;
- (id)openOrCreateDataset:(id)dataset;
- (id)refreshDatasetMetadata;
- (id)registerDevice:(id)device;
- (id)registerDeviceInternal:(id)internal;
- (id)subscribe:(id)subscribe;
- (id)subscribeAll;
- (id)unsubscribe:(id)unsubscribe;
- (id)unsubscribeAll;
- (void)wipe;
@end

