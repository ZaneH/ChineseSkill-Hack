/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AFNetworkReachabilityManager : XXUnknownSuperclass {
	int _networkReachabilityStatus;
	SCNetworkReachabilityRef _networkReachability;
	unsigned _networkReachabilityAssociation;
	id _networkReachabilityStatusBlock;
}
@property(assign, nonatomic) SCNetworkReachabilityRef networkReachability;
@property(assign, nonatomic) unsigned networkReachabilityAssociation;
@property(assign, nonatomic) int networkReachabilityStatus;
@property(copy, nonatomic) id networkReachabilityStatusBlock;
@property(readonly, assign, nonatomic, getter=isReachable) BOOL reachable;
@property(readonly, assign, nonatomic, getter=isReachableViaWWAN) BOOL reachableViaWWAN;
@property(readonly, assign, nonatomic, getter=isReachableViaWiFi) BOOL reachableViaWiFi;
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;
+ (id)managerForAddress:(const void*)address;
+ (id)managerForDomain:(id)domain;
+ (id)sharedManager;
- (id)initWithReachability:(SCNetworkReachabilityRef)reachability;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localizedNetworkReachabilityStatusString;
- (void)setReachabilityStatusChangeBlock:(id)block;
- (void)startMonitoring;
- (void)stopMonitoring;
@end
