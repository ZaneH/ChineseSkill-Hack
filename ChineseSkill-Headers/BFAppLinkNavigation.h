/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BFAppLink, NSDictionary;

@interface BFAppLinkNavigation : XXUnknownSuperclass {
	NSDictionary* _extras;
	NSDictionary* _appLinkData;
	BFAppLink* _appLink;
}
@property(retain, nonatomic) BFAppLink* appLink;
@property(copy, nonatomic) NSDictionary* appLinkData;
@property(copy, nonatomic) NSDictionary* extras;
+ (id)defaultResolver;
+ (int)navigateToAppLink:(id)appLink error:(id*)error;
+ (id)navigateToURLInBackground:(id)background;
+ (id)navigateToURLInBackground:(id)background resolver:(id)resolver;
+ (id)navigationWithAppLink:(id)appLink extras:(id)extras appLinkData:(id)data;
+ (id)resolveAppLinkInBackground:(id)background;
+ (id)resolveAppLinkInBackground:(id)background resolver:(id)resolver;
+ (void)setDefaultResolver:(id)resolver;
- (void).cxx_destruct;
- (id)appLinkURLWithTargetURL:(id)targetURL error:(id*)error;
- (int)navigate:(id*)navigate;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)targetURL error:(id)error type:(int)type;
- (id)stringByEscapingQueryString:(id)string;
@end
