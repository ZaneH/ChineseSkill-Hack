/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BehaviourBaseDao.h"


__attribute__((visibility("hidden")))
@interface DAO_db_Behaviour : BehaviourBaseDao {
}
- (void)ExecuteQueryNoResult:(id)result;
- (int)countWithQuery:(id)query;
- (BOOL)deleteAt:(int)at;
- (void)insertRow:(id)row;
- (id)select;
- (id)selectAt:(int)at;
- (id)selectWithLimit;
- (id)selectWithQuery:(id)query;
- (id)setTable:(id)table;
- (id)setTable:(id)table Query:(id)query;
- (BOOL)updateAt:(id)at;
@end
