/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface AFSecurityPolicy : XXUnknownSuperclass {
	BOOL _validatesCertificateChain;
	BOOL _allowInvalidCertificates;
	BOOL _validatesDomainName;
	unsigned _SSLPinningMode;
	NSArray* _pinnedCertificates;
	NSArray* _pinnedPublicKeys;
}
@property(assign, nonatomic) unsigned SSLPinningMode;
@property(assign, nonatomic) BOOL allowInvalidCertificates;
@property(retain, nonatomic) NSArray* pinnedCertificates;
@property(retain, nonatomic) NSArray* pinnedPublicKeys;
@property(assign, nonatomic) BOOL validatesCertificateChain;
@property(assign, nonatomic) BOOL validatesDomainName;
+ (id)defaultPinnedCertificates;
+ (id)defaultPolicy;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned)pinningMode;
- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateServerTrust:(SecTrust*)trust;
- (BOOL)evaluateServerTrust:(SecTrust*)trust forDomain:(id)domain;
@end

