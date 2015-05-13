/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UMTIdTracking, UMTImprint, UMTActivateMsg, UMTAppInfo, UMTDeviceInfo, UMTClientStats, NSMutableArray, UMTMiscInfo;

@interface UMTUALogEntry : XXUnknownSuperclass <NSCoding> {
	UMTClientStats* __client_stats;
	UMTAppInfo* __app_info;
	UMTDeviceInfo* __device_info;
	UMTMiscInfo* __misc_info;
	UMTActivateMsg* __activate_msg;
	NSMutableArray* __instant_msgs;
	NSMutableArray* __sessions;
	UMTImprint* __imprint;
	UMTIdTracking* __id_tracking;
	BOOL __client_stats_isset;
	BOOL __app_info_isset;
	BOOL __device_info_isset;
	BOOL __misc_info_isset;
	BOOL __activate_msg_isset;
	BOOL __instant_msgs_isset;
	BOOL __sessions_isset;
	BOOL __imprint_isset;
	BOOL __id_tracking_isset;
}
@property(retain, nonatomic, getter=activate_msg, setter=setActivate_msg:) UMTActivateMsg* activate_msg;
@property(retain, nonatomic, getter=app_info, setter=setApp_info:) UMTAppInfo* app_info;
@property(retain, nonatomic, getter=client_stats, setter=setClient_stats:) UMTClientStats* client_stats;
@property(retain, nonatomic, getter=device_info, setter=setDevice_info:) UMTDeviceInfo* device_info;
@property(retain, nonatomic, getter=id_tracking, setter=setId_tracking:) UMTIdTracking* id_tracking;
@property(retain, nonatomic, getter=imprint, setter=setImprint:) UMTImprint* imprint;
@property(retain, nonatomic, getter=instant_msgs, setter=setInstant_msgs:) NSMutableArray* instant_msgs;
@property(retain, nonatomic, getter=misc_info, setter=setMisc_info:) UMTMiscInfo* misc_info;
@property(retain, nonatomic, getter=sessions, setter=setSessions:) NSMutableArray* sessions;
- (id)init;
- (id)initWithClient_stats:(id)client_stats app_info:(id)info device_info:(id)info3 misc_info:(id)info4 activate_msg:(id)msg instant_msgs:(id)msgs sessions:(id)sessions imprint:(id)imprint id_tracking:(id)tracking;
- (id)initWithCoder:(id)coder;
- (BOOL)activate_msgIsSet;
- (BOOL)app_infoIsSet;
- (BOOL)client_statsIsSet;
- (void)dealloc;
- (id)description;
- (BOOL)device_infoIsSet;
- (void)encodeWithCoder:(id)coder;
- (BOOL)id_trackingIsSet;
- (BOOL)imprintIsSet;
- (BOOL)instant_msgsIsSet;
- (BOOL)misc_infoIsSet;
- (void)read:(id)read;
- (BOOL)sessionsIsSet;
- (void)unsetActivate_msg;
- (void)unsetApp_info;
- (void)unsetClient_stats;
- (void)unsetDevice_info;
- (void)unsetId_tracking;
- (void)unsetImprint;
- (void)unsetInstant_msgs;
- (void)unsetMisc_info;
- (void)unsetSessions;
- (void)write:(id)write;
@end

