/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface Model_db_unit : XXUnknownSuperclass {
	int _UnitId;
	NSString* _UnitName;
	NSString* _Description;
	NSString* _LessonList;
	int _LevelId;
	int _SortIndex;
	long _Version;
	NSString* _DataUId;
	NSString* _IconResSuffix;
}
@property(retain, nonatomic) NSString* DataUId;
@property(retain, nonatomic) NSString* Description;
@property(retain, nonatomic) NSString* IconResSuffix;
@property(retain, nonatomic) NSString* LessonList;
@property(assign) int LevelId;
@property(assign) int SortIndex;
@property(assign) int UnitId;
@property(retain, nonatomic) NSString* UnitName;
@property(assign, nonatomic) long Version;
- (id)init;
- (void).cxx_destruct;
@end
