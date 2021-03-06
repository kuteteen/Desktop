//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYDynamicListModel.h"

@class NSArray;

@interface IMYCacheDynamicListModel : IMYDynamicListModel
{
    _Bool _isDelete;
    long long _native_id;
    long long _web_id;
    NSArray *_nativeImages;
}

+ (_Bool)isContainParent;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
@property(retain, nonatomic) NSArray *nativeImages; // @synthesize nativeImages=_nativeImages;
@property(nonatomic) long long web_id; // @synthesize web_id=_web_id;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property long long native_id; // @synthesize native_id=_native_id;
- (void).cxx_destruct;
- (_Bool)allow_operate;
- (void)setAvatar:(id)arg1;
- (void)userSetValueForModel:(id)arg1 value:(id)arg2;
- (id)userGetValueForModel:(id)arg1;

@end

