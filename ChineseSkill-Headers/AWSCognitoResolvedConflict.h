/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AWSCognitoConflict, AWSCognitoRecord;

@interface AWSCognitoResolvedConflict : XXUnknownSuperclass {
	AWSCognitoRecord* _resolvedConflict;
	AWSCognitoConflict* _conflict;
}
@property(readonly, assign, nonatomic) AWSCognitoConflict* conflict;
@property(readonly, assign, nonatomic) AWSCognitoRecord* resolvedConflict;
+ (id)resolvedConflictWithLocalRecord:(id)localRecord;
+ (id)resolvedConflictWithRemoteRecord:(id)remoteRecord;
+ (id)resolvedConflictWithValue:(id)value newValue:(id)value2;
- (id)initWithLocalRecord:(id)localRecord;
- (id)initWithRemoteRecord:(id)remoteRecord;
- (id)initWithValue:(id)value newValue:(id)value2;
- (void).cxx_destruct;
@end
