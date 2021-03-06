/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FBSession, NSString, FBRequestConnection, FBRequestConnectionRetryManagerAlertViewHelper, NSMutableArray;
@protocol FBRequestConnectionRetryManagerDelegate;

@interface FBRequestConnectionRetryManager : XXUnknownSuperclass {
	FBRequestConnection<FBRequestConnectionRetryManagerDelegate>* _requestConnection;
	int _state;
	FBSession* _sessionToReconnect;
	NSString* _alertMessage;
	NSMutableArray* _requestMetadatas;
	FBRequestConnectionRetryManagerAlertViewHelper* _alertViewHelper;
}
@property(copy, nonatomic) NSString* alertMessage;
@property(retain, nonatomic) FBRequestConnectionRetryManagerAlertViewHelper* alertViewHelper;
@property(assign, nonatomic) FBRequestConnection<FBRequestConnectionRetryManagerDelegate>* requestConnection;
@property(retain, nonatomic) NSMutableArray* requestMetadatas;
@property(retain, nonatomic) FBSession* sessionToReconnect;
@property(assign, nonatomic) int state;
- (id)initWithFBRequestConnection:(id)fbrequestConnection;
- (void)addRequestMetadata:(id)metadata;
- (void)dealloc;
- (void)notifyConnectionDidFinishAbortingRetries;
- (void)notifyConnectionDidFinishWithNoRetries;
- (void)notifyConnectionWillRetryWithConnection:(id)notifyConnection;
- (void)performRetries;
- (void)repairFailed;
- (void)repairSuccess;
@end

