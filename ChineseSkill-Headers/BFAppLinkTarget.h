/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL;

@interface BFAppLinkTarget : XXUnknownSuperclass {
	NSURL* _URL;
	NSString* _appStoreId;
	NSString* _appName;
}
@property(retain, nonatomic) NSURL* URL;
@property(copy, nonatomic) NSString* appName;
@property(copy, nonatomic) NSString* appStoreId;
+ (id)appLinkTargetWithURL:(id)url appStoreId:(id)anId appName:(id)name;
- (void).cxx_destruct;
@end

