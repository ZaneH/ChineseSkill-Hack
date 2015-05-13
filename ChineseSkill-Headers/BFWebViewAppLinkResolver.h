/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BFAppLinkResolving.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface BFWebViewAppLinkResolver : XXUnknownSuperclass <BFAppLinkResolving> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(readonly, assign) Class superclass;
+ (id)sharedInstance;
- (id)appLinkFromALData:(id)aldata destination:(id)destination;
- (id)appLinkFromURLInBackground:(id)background;
- (id)followRedirects:(id)redirects;
- (id)getALDataFromLoadedPage:(id)loadedPage;
- (id)parseALData:(id)data;
@end
