//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYVKWebViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, IMYVKWebViewController, NSDictionary, NSMutableArray, NSString, RACDisposable, UITableView;

@interface YBBToolsQAResultVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, IMYVKWebViewControllerDelegate>
{
    _Bool _hasMore;
    UITableView *_tableView;
    IMYCaptionView *_captionView;
    CDUnknownBlockType _webSearch;
    CDUnknownBlockType _selectTableviewRowBlock;
    CDUnknownBlockType _showTableviewRowBlock;
    NSMutableArray *_dataArray;
    NSString *_searchString;
    long long _pageIndex;
    RACDisposable *_requestDisposable;
    IMYVKWebViewController *_webVC;
    long long _current_tab;
    long long _wordsType;
    NSDictionary *_biParams;
}

@property(copy, nonatomic) NSDictionary *biParams; // @synthesize biParams=_biParams;
@property(nonatomic) long long wordsType; // @synthesize wordsType=_wordsType;
@property(nonatomic) long long current_tab; // @synthesize current_tab=_current_tab;
@property(retain, nonatomic) IMYVKWebViewController *webVC; // @synthesize webVC=_webVC;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) __weak RACDisposable *requestDisposable; // @synthesize requestDisposable=_requestDisposable;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType showTableviewRowBlock; // @synthesize showTableviewRowBlock=_showTableviewRowBlock;
@property(copy, nonatomic) CDUnknownBlockType selectTableviewRowBlock; // @synthesize selectTableviewRowBlock=_selectTableviewRowBlock;
@property(copy, nonatomic) CDUnknownBlockType webSearch; // @synthesize webSearch=_webSearch;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)imy_webVCDidLoadFinished:(id)arg1;
- (_Bool)imy_webVC:(id)arg1 shouldStartURLRequest:(id)arg2;
- (void)searchEventTrack:(id)arg1 row:(unsigned long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getGlobalSearchWithKeyword:(id)arg1 andPage:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)getMoreData;
- (void)requestWithSearchWord:(id)arg1 andWordsType:(unsigned long long)arg2 biParams:(id)arg3;
- (void)webHandler;
- (id)urlString;
- (void)setupCaptionView;
- (void)addFooterRefreshing;
- (void)setupWebView;
- (void)setupTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

