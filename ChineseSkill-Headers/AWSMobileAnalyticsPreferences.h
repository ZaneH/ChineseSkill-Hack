/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWSMobileAnalyticsPreferences <NSObject>
- (BOOL)boolForKey:(id)key withOptValue:(BOOL)optValue;
- (double)doubleForKey:(id)key withOptValue:(double)optValue;
- (int)intForKey:(id)key withOptValue:(int)optValue;
- (long long)longLongForKey:(id)key withOptValue:(long long)optValue;
- (void)putBool:(BOOL)aBool forKey:(id)key;
- (void)putDouble:(double)aDouble forKey:(id)key;
- (void)putInt:(int)int forKey:(id)key;
- (void)putLongLong:(long long)aLong forKey:(id)key;
- (void)putString:(id)string forKey:(id)key;
- (id)stringForKey:(id)key withOptValue:(id)optValue;
@end
