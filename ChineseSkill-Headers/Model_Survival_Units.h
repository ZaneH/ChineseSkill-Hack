/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface Model_Survival_Units : XXUnknownSuperclass {
	int _unitId;
	NSString* _unitName;
	NSString* _imageName;
	float _progress;
	int _nStatus;
	int _nTotal;
}
@property(retain, nonatomic) NSString* imageName;
@property(assign) int nStatus;
@property(assign) int nTotal;
@property(assign) float progress;
@property(assign) int unitId;
@property(copy, nonatomic) NSString* unitName;
- (id)init;
- (void).cxx_destruct;
@end

