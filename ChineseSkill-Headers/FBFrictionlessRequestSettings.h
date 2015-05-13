/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, FBRequest, NSArray;

@interface FBFrictionlessRequestSettings : XXUnknownSuperclass <FBRequestDelegate> {
	NSArray* _allowedRecipients;
	FBRequest* _activeRequest;
	BOOL _enabled;
}
@property(retain, nonatomic) FBRequest* activeRequest;
@property(retain) NSArray* allowedRecipients;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign, nonatomic) BOOL enabled;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NSArray* recipientIDs;
@property(readonly, assign) Class superclass;
- (id)init;
- (void)dealloc;
- (void)enableWithFacebook:(id)facebook;
- (BOOL)isFrictionlessEnabledForRecipient:(id)recipient;
- (BOOL)isFrictionlessEnabledForRecipients:(id)recipients;
- (void)reloadRecipientCacheWithFacebook:(id)facebook;
- (void)request:(id)request didFailWithError:(id)error;
- (void)request:(id)request didLoad:(id)load;
- (void)updateRecipientCacheWithRecipients:(id)recipients;
- (void)updateRecipientCacheWithRequestResult:(id)requestResult;
@end

