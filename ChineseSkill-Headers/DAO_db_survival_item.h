/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SurvivalBaseDao.h"


__attribute__((visibility("hidden")))
@interface DAO_db_survival_item : SurvivalBaseDao {
}
- (void)Encryption;
- (void)ExecuteQueryNoResult:(id)result;
- (int)countFavorite;
- (int)countWithQuery:(id)query;
- (BOOL)deleteAt:(int)at;
- (void)eraseTable;
- (void)insertRow:(id)row;
- (id)select;
- (id)selectAt:(int)at;
- (id)selectAtCid:(int)cid;
- (id)selectFavorite;
- (id)selectWithQuery:(id)query;
- (id)setTable:(id)table;
- (id)setTable:(id)table Query:(id)query;
- (BOOL)updateAt:(id)at;
- (BOOL)updateFavoriteAt:(id)at;
@end

