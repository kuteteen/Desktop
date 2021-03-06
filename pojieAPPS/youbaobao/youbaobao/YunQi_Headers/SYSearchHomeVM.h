//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYSearchVM.h"

@class NSArray, NSDictionary, NSString;

@interface SYSearchHomeVM : SYSearchVM
{
    _Bool _present;
    NSDictionary *_searchSuggestWords;
    NSArray *_dataSource;
    NSString *_searchText;
    NSString *_searchPlaceholder;
    long long _targetType;
    NSArray *_tags;
    NSString *_searchTitle;
    NSDictionary *_dicDatas;
    NSArray *_suggest_words;
    NSArray *_words_ids;
    NSArray *_histories;
    NSArray *_question_ids;
}

+ (void)load;
@property(retain, nonatomic) NSArray *question_ids; // @synthesize question_ids=_question_ids;
@property(retain, nonatomic) NSArray *histories; // @synthesize histories=_histories;
@property(retain, nonatomic) NSArray *words_ids; // @synthesize words_ids=_words_ids;
@property(retain, nonatomic) NSArray *suggest_words; // @synthesize suggest_words=_suggest_words;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(readonly, copy, nonatomic) NSDictionary *dicDatas; // @synthesize dicDatas=_dicDatas;
@property(copy, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(copy, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (id)searchSuggestWords;
- (void).cxx_destruct;
- (void)wordShowBI;
- (void)clearHistory;
- (void)readWordKey;
- (void)setSearchSuggestWords:(id)arg1;
- (id)initWithFromQuan:(_Bool)arg1 forumId:(long long)arg2;

@end

