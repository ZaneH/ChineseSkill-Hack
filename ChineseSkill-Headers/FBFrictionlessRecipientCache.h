/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBCacheDescriptor.h"
#import "FBWebDialogsDelegate.h"
#import "FBFrictionlessDialogSupportDelegate.h"

@class NSString, NSArray, FBFrictionlessRequestSettings;

@interface FBFrictionlessRecipientCache : FBCacheDescriptor <FBFrictionlessDialogSupportDelegate, FBWebDialogsDelegate> {
	BOOL _frictionlessShouldMakeViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(retain, nonatomic) FBFrictionlessRequestSettings* frictionlessSettings;
@property(assign, nonatomic) BOOL frictionlessShouldMakeViewInvisible;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSArray* recipientIDs;
@property(readonly, assign) Class superclass;
- (id)init;
- (BOOL)areFrictionlessRecipients:(id)recipients;
- (void)dealloc;
- (BOOL)isFrictionlessRecipient:(id)recipient;
- (void)prefetchAndCacheForSession:(id)session;
- (void)prefetchAndCacheForSession:(id)session completionHandler:(id)handler;
- (void)webDialogsWillPresentDialog:(id)webDialogs parameters:(id)parameters session:(id)session;
@end

