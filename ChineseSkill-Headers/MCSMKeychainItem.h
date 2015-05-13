/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface MCSMKeychainItem : XXUnknownSuperclass {
	NSString* account_;
	NSDictionary* attributes_;
	NSString* password_;
}
@property(readonly, copy) NSString* account;
@property(readonly, retain) NSDictionary* attributes;
@property(readonly, copy) NSString* password;
- (id)_initWithAccount:(id)account attributes:(id)attributes password:(id)password;
- (void)dealloc;
- (id)description;
- (id)objectForKeyedSubscript:(id)keyedSubscript;
- (BOOL)removeFromKeychain;
@end

