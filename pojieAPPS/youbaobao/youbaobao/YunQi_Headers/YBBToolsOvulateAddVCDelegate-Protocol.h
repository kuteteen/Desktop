//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, YBBToolsOvulateCellVM;

@protocol YBBToolsOvulateAddVCDelegate <NSObject>
- (void)selectWith:(YBBToolsOvulateCellVM *)arg1;
- (void)addMensesForEarlierOvulate;
- (void)confirmAddOvulateWith:(YBBToolsOvulateCellVM *)arg1 isCover:(_Bool)arg2;
- (NSString *)addOvulateJudgeWith:(YBBToolsOvulateCellVM *)arg1;
@end
