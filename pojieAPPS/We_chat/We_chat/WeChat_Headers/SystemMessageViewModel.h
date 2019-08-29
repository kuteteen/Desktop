//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

@class NSMutableArray;

@interface SystemMessageViewModel : BaseMessageViewModel
{
    NSMutableArray *m_contentTextStyles;
    _Bool _hasParseForFold;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool hasParseForFold; // @synthesize hasParseForFold=_hasParseForFold;
@property(readonly, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=m_contentTextStyles;
- (void).cxx_destruct;
- (void)onMessageForceUpdateLayout;
@property(readonly, nonatomic) long long parserType;
@property(readonly, nonatomic) double systemTextFontSize;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end
