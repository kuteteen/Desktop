//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewController.h"

@class TTQHotTopicListViewModel;

@interface TTQHotTopicListViewController : TTQTableViewController
{
    TTQHotTopicListViewModel *_viewModel;
}

@property(retain, nonatomic) TTQHotTopicListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)presetTableView:(id)arg1 cell:(id)arg2 model:(id)arg3 indexPath:(id)arg4;
- (void)doPriaseWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishedRequest:(id)arg1;
- (id)refreshForSignal:(_Bool)arg1;
- (void)refresh:(_Bool)arg1;
- (void)bindViewModel;
- (id)captionView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

