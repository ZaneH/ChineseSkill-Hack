/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Model_userprofile : XXUnknownSuperclass {
	BOOL _isFollowing;
	NSString* _Photo;
	NSString* _UserName;
	NSString* _FullName;
	NSString* _SkillString;
	NSString* _Bio;
	NSMutableArray* _followerList;
}
@property(retain, nonatomic) NSString* Bio;
@property(retain, nonatomic) NSString* FullName;
@property(retain, nonatomic) NSString* Photo;
@property(retain, nonatomic) NSString* SkillString;
@property(retain, nonatomic) NSString* UserName;
@property(retain, nonatomic) NSMutableArray* followerList;
@property(assign) BOOL isFollowing;
- (void).cxx_destruct;
@end

