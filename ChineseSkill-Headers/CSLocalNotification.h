/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CSLocalNotification : XXUnknownSuperclass {
}
+ (id)getNoticeficationKey:(int)key;
+ (id)getNotificationSetting;
+ (id)getRemindClockTime;
+ (void)saveNewNotificationSetting:(id)setting WithTime:(id)time;
+ (id)sharedOperator;
- (void)setNotificationForAllWeekWithDate:(id)date;
- (void)setNotificationForSomeDayWithDayNum:(int)dayNum time:(id)time;
@end
