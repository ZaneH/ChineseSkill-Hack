/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MobClickEvent : XXUnknownSuperclass {
}
+ (void)beginEvent:(id)event;
+ (void)beginEvent:(id)event label:(id)label;
+ (void)beginEvent:(id)event primarykey:(id)primarykey attributes:(id)attributes;
+ (void)ekvPerformJob;
+ (void)endEvent:(id)event;
+ (void)endEvent:(id)event label:(id)label;
+ (void)endEvent:(id)event primarykey:(id)primarykey;
+ (void)event:(id)event;
+ (void)event:(id)event acc:(int)acc;
+ (void)event:(id)event attributes:(id)attributes;
+ (void)event:(id)event attributes:(id)attributes durations:(int)durations;
+ (void)event:(id)event durations:(int)durations;
+ (void)event:(id)event label:(id)label;
+ (void)event:(id)event label:(id)label acc:(int)acc;
+ (void)event:(id)event label:(id)label durations:(int)durations;
+ (void)eventJob:(id)job;
+ (void)eventJob:(id)job label:(id)label acc:(int)acc du:(int)du;
+ (void)gameEvent:(id)event attributes:(id)attributes;
+ (void)gameEvent:(id)event attributes:(id)attributes durations:(int)durations;
+ (BOOL)validEventID:(id)anId;
@end

