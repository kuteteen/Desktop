//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIMMessage, NIMMessageModel, NIMSessionMessageOperateResult, NSArray, NSDictionary;

@protocol NIMSessionDataSource <NSObject>
- (void)cleanCache;
- (void)sendMessageReceipt:(NSArray *)arg1;
- (NSDictionary *)checkReceipts:(NSArray *)arg1;
- (void)checkAttachmentState:(NSArray *)arg1;
- (void)loadNewMessagesWithComplete:(void (^)(long long, NSArray *, NSError *))arg1;
- (void)loadHistoryMessagesWithComplete:(void (^)(long long, NSArray *, NSError *))arg1;
- (void)resetMessages:(void (^)(NSError *))arg1;
- (NSArray *)deleteModels:(struct _NSRange)arg1;
- (long long)indexAtModelArray:(NIMMessageModel *)arg1;
- (NIMMessageModel *)findModel:(NIMMessage *)arg1;
- (NIMSessionMessageOperateResult *)updateMessageModel:(NIMMessageModel *)arg1;
- (NIMSessionMessageOperateResult *)deleteMessageModel:(NIMMessageModel *)arg1;
- (NIMSessionMessageOperateResult *)insertMessageModels:(NSArray *)arg1;
- (NIMSessionMessageOperateResult *)addMessageModels:(NSArray *)arg1;
- (NSArray *)items;
@end

