/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBURLConnectionDelegate.h"
#import "FBRequestConnectionRetryManagerDelegate.h"
#import "ChineseSkillNew-Structs.h"

@class NSMutableURLRequest, FBLogger, NSMutableArray, FBRequest, NSString, FBRequestConnectionRetryManager, NSError, FBURLConnection, NSHTTPURLResponse;
@protocol FBRequestConnectionDelegate;

@interface FBRequestConnection : XXUnknownSuperclass <FBURLConnectionDelegate, FBRequestConnectionRetryManagerDelegate> {
	BOOL _errorBehavior;
	BOOL _isResultFromCache;
	NSHTTPURLResponse* _urlResponse;
	id<FBRequestConnectionDelegate> _delegate;
	FBURLConnection* _connection;
	NSMutableArray* _requests;
	int _state;
	NSMutableURLRequest* _internalUrlRequest;
	FBRequest* _deprecatedRequest;
	FBLogger* _logger;
	unsigned long _requestStartTime;
	FBRequestConnectionRetryManager* _retryManager;
	NSError* _connectionError;
	double _timeout;
}
@property(retain, nonatomic) FBURLConnection* connection;
@property(retain, nonatomic) NSError* connectionError;
@property(readonly, copy) NSString* debugDescription;
@property(assign, nonatomic) id<FBRequestConnectionDelegate> delegate;
@property(retain, nonatomic) FBRequest* deprecatedRequest;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) int errorBehavior;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableURLRequest* internalUrlRequest;
@property(readonly, assign, nonatomic) BOOL isResultFromCache;
@property(retain, nonatomic) FBLogger* logger;
@property(assign, nonatomic) unsigned long requestStartTime;
@property(retain, nonatomic) NSMutableArray* requests;
@property(retain, nonatomic) FBRequestConnectionRetryManager* retryManager;
@property(assign, nonatomic) int state;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) double timeout;
@property(retain, nonatomic) NSMutableURLRequest* urlRequest;
@property(retain, nonatomic) NSHTTPURLResponse* urlResponse;
+ (void)addRequestToExtendTokenForSession:(id)session connection:(id)connection;
+ (void)addRequestToRefreshPermissionsSession:(id)refreshPermissionsSession connection:(id)connection;
+ (BOOL)isPermissionsRequest:(id)request;
+ (void)processGraphObject:(id)object forPath:(id)path withAction:(id)action;
+ (void)processGraphObjectPropertyKey:(id)key value:(id)value action:(id)action passByValue:(BOOL)value4;
+ (id)startForCustomAudienceThirdPartyID:(id)customAudienceThirdPartyID completionHandler:(id)handler;
+ (id)startForDeleteObject:(id)deleteObject completionHandler:(id)handler;
+ (id)startForMeWithCompletionHandler:(id)completionHandler;
+ (id)startForMyFriendsWithCompletionHandler:(id)completionHandler;
+ (id)startForPlacesSearchAtCoordinate:(XXStruct_zYrK5D)coordinate radiusInMeters:(int)meters resultsLimit:(int)limit searchText:(id)text completionHandler:(id)handler;
+ (id)startForPostOpenGraphObject:(id)postOpenGraphObject completionHandler:(id)handler;
+ (id)startForPostOpenGraphObjectWithType:(id)type title:(id)title image:(id)image url:(id)url description:(id)description objectProperties:(id)properties completionHandler:(id)handler;
+ (id)startForPostStatusUpdate:(id)postStatusUpdate completionHandler:(id)handler;
+ (id)startForPostStatusUpdate:(id)postStatusUpdate place:(id)place tags:(id)tags completionHandler:(id)handler;
+ (id)startForPostWithGraphPath:(id)graphPath graphObject:(id)object completionHandler:(id)handler;
+ (id)startForUpdateOpenGraphObject:(id)updateOpenGraphObject completionHandler:(id)handler;
+ (id)startForUpdateOpenGraphObjectWithId:(id)anId title:(id)title image:(id)image url:(id)url description:(id)description objectProperties:(id)properties completionHandler:(id)handler;
+ (id)startForUploadPhoto:(id)uploadPhoto completionHandler:(id)handler;
+ (id)startForUploadStagingResourceWithImage:(id)image completionHandler:(id)handler;
+ (id)startWithGraphPath:(id)graphPath completionHandler:(id)handler;
+ (id)startWithGraphPath:(id)graphPath parameters:(id)parameters HTTPMethod:(id)method completionHandler:(id)handler;
+ (id)userAgent;
- (id)init;
- (id)initWithMetadata:(id)metadata;
- (id)initWithTimeout:(double)timeout;
- (id)accessTokenWithRequest:(id)request;
- (void)addPiggybackRequests;
- (void)addRequest:(id)request completionHandler:(id)handler;
- (void)addRequest:(id)request completionHandler:(id)handler batchEntryName:(id)name;
- (void)addRequest:(id)request completionHandler:(id)handler batchParameters:(id)parameters;
- (void)addRequest:(id)request completionHandler:(id)handler batchParameters:(id)parameters behavior:(int)behavior;
- (void)addRequest:(id)request toBatch:(id)batch attachments:(id)attachments;
- (void)appendAttachments:(id)attachments toBody:(id)body addFormData:(BOOL)data logger:(id)logger;
- (void)appendJSONRequests:(id)requests toBody:(id)body andNameAttachments:(id)attachments logger:(id)logger;
- (void)cancel;
- (id)checkConnectionError:(id)error statusCode:(int)code parsedJSONResponse:(id)response;
- (void)completeDeprecatedWithData:(id)data results:(id)results orError:(id)error;
- (void)completeWithResponse:(id)response data:(id)data orError:(id)error;
- (void)completeWithResults:(id)results orError:(id)error;
- (void)dealloc;
- (id)errorFromResult:(id)result;
- (id)errorWithCode:(int)code statusCode:(int)code2 parsedJSONResponse:(id)response innerError:(id)error message:(id)message;
- (void)facebookURLConnection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
- (id)getBatchAppID:(id)anId;
- (id)getRequestMetadata:(id)metadata;
- (BOOL)isAttachment:(id)attachment;
- (BOOL)isExpiredTokenError:(id)error resultIndex:(unsigned)index;
- (BOOL)isInsufficientPermissionError:(id)error resultIndex:(unsigned)index;
- (BOOL)isInvalidSessionError:(id)error resultIndex:(unsigned)index;
- (BOOL)isPasswordChangeError:(id)error resultIndex:(unsigned)index;
- (void)logDeveloperError:(id)error forRequest:(id)request;
- (void)logRequest:(id)request bodyLength:(unsigned)length bodyLogger:(id)logger attachmentLogger:(id)logger4;
- (id)newFBURLConnection;
- (id)parseJSONOrOtherwise:(id)otherwise error:(id*)error;
- (id)parseJSONResponse:(id)response error:(id*)error statusCode:(int)code;
- (void)registerTokenToOmitFromLog:(id)log;
- (id)requestWithBatch:(id)batch timeout:(double)timeout;
- (void)retryManager:(id)manager willRetryWithRequestConnection:(id)requestConnection;
- (void)retryManagerDidFinishAbortingRetries:(id)retryManager;
- (void)retryManagerDidFinishWithNoRetries:(id)retryManager;
- (BOOL)shouldCloseRequestSession:(id)session;
- (void)start;
- (void)startURLConnectionWithRequest:(id)request skipRoundTripIfCached:(BOOL)cached completionHandler:(id)handler;
- (void)startWithCacheIdentity:(id)cacheIdentity skipRoundtripIfCached:(BOOL)cached;
- (id)unpackIndividualJSONResponseError:(id)error;
- (id)urlStringForSingleRequest:(id)singleRequest forBatch:(BOOL)batch;
@end

