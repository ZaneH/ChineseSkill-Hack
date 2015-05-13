/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BFAppLink, NSURL, NSDictionary;

@interface BFURL : XXUnknownSuperclass {
	NSURL* _targetURL;
	NSDictionary* _targetQueryParameters;
	NSDictionary* _appLinkData;
	NSDictionary* _appLinkExtras;
	BFAppLink* _appLinkReferer;
	NSURL* _inputURL;
	NSDictionary* _inputQueryParameters;
}
@property(readonly, assign, nonatomic) NSDictionary* appLinkData;
@property(readonly, assign, nonatomic) NSDictionary* appLinkExtras;
@property(readonly, assign, nonatomic) BFAppLink* appLinkReferer;
@property(readonly, assign, nonatomic) NSDictionary* inputQueryParameters;
@property(readonly, assign, nonatomic) NSURL* inputURL;
@property(readonly, assign, nonatomic) NSDictionary* targetQueryParameters;
@property(readonly, assign, nonatomic) NSURL* targetURL;
+ (id)URLForRenderBackToReferrerBarURL:(id)referrerBarURL;
+ (id)URLWithInboundURL:(id)inboundURL sourceApplication:(id)application;
+ (id)URLWithURL:(id)url;
+ (id)decodeURLString:(id)string;
+ (id)queryParametersForURL:(id)url;
- (id)initWithURL:(id)url forOpenInboundURL:(BOOL)openInboundURL sourceApplication:(id)application forRenderBackToReferrerBar:(BOOL)referrerBar;
- (void).cxx_destruct;
@end

