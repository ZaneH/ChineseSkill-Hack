/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface AWSLogger : XXUnknownSuperclass {
	int _logLevel;
}
@property(assign) int logLevel;
+ (id)defaultLogger;
- (id)init;
- (void)log:(int)log format:(id)format;
- (id)logLevelLabel:(int)label;
@end

