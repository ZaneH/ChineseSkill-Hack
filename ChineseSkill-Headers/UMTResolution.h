/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface UMTResolution : XXUnknownSuperclass <NSCoding> {
	int __height;
	int __width;
	BOOL __height_isset;
	BOOL __width_isset;
}
@property(assign, nonatomic, getter=height, setter=setHeight:) int height;
@property(assign, nonatomic, getter=width, setter=setWidth:) int width;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithHeight:(int)height width:(int)width;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (BOOL)heightIsSet;
- (void)read:(id)read;
- (void)unsetHeight;
- (void)unsetWidth;
- (BOOL)widthIsSet;
- (void)write:(id)write;
@end
