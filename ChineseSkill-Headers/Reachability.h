/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface Reachability : XXUnknownSuperclass {
	BOOL reachableOnWWAN;
	SCNetworkReachabilityRef reachabilityRef;
	dispatch_queue_s* reachabilitySerialQueue;
	id reachableBlock;
	id unreachableBlock;
	id reachabilityObject;
}
@property(retain, nonatomic) id reachabilityObject;
@property(assign, nonatomic) SCNetworkReachabilityRef reachabilityRef;
@property(assign, nonatomic) dispatch_queue_s* reachabilitySerialQueue;
@property(copy, nonatomic) id reachableBlock;
@property(assign, nonatomic) BOOL reachableOnWWAN;
@property(copy, nonatomic) id unreachableBlock;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const sockaddr_in*)address;
+ (id)reachabilityWithHostName:(id)hostName;
+ (id)reachabilityWithHostname:(id)hostname;
- (id)initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef;
- (void).cxx_destruct;
- (BOOL)connectionRequired;
- (id)currentReachabilityFlags;
- (int)currentReachabilityStatus;
- (id)currentReachabilityString;
- (void)dealloc;
- (id)description;
- (BOOL)isConnectionOnDemand;
- (BOOL)isConnectionRequired;
- (BOOL)isInterventionRequired;
- (BOOL)isReachable;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableWithFlags:(unsigned)flags;
- (void)reachabilityChanged:(unsigned)changed;
- (unsigned)reachabilityFlags;
- (BOOL)startNotifier;
- (void)stopNotifier;
@end

