/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary;

@interface BFMeasurementEvent : XXUnknownSuperclass {
	NSString* _name;
	NSDictionary* _args;
}
+ (void)postNotificationForEventName:(id)eventName args:(id)args;
- (id)initEventWithName:(id)name args:(id)args;
- (void).cxx_destruct;
- (void)postNotification;
@end

