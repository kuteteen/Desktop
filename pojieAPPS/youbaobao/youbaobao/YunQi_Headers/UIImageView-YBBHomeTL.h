//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface UIImageView (YBBHomeTL)
+ (struct CGSize)getPictureUrlSize:(id)arg1 realySize:(_Bool)arg2;
- (void)ybbhometl_setImageWithPHAssetOrLocalidentity:(id)arg1 resize:(struct CGSize)arg2 callback:(CDUnknownBlockType)arg3;
- (void)ybbhometl_setImageWithPHAssetOrLocalidentity:(id)arg1 pictureURLString:(id)arg2 quality:(unsigned long long)arg3 type:(long long)arg4 resize:(struct CGSize)arg5;
- (void)ybbhometl_setImageWithPHAssetOrLocalidentity:(id)arg1 pictureURLString:(id)arg2 resize:(struct CGSize)arg3;
- (void)ybbhometl_setImageWithPHAssetOrLocalidentity:(id)arg1 pictureURLString:(id)arg2;
@property(nonatomic) int requestID;
- (void)setRequesjiutID:(int)arg1;
@property(copy, nonatomic) NSString *phAssetLocalIdentity;
@property long long hmb_displayContentMode;
@end

