//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYPhotoBrowserDelegate-Protocol.h"
#import "ShowLargePhotosDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class IMYFeedbackTagsModel, IMYFeedbackUnregistHeaderView, IMYFeedbackViewModel, NSArray, NSMutableArray, NSString, TPKeyboardAvoidingTableView, UIScrollView;

@interface IMYFeedbackUnregistVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, IMYPhotoBrowserDelegate, ShowLargePhotosDelegate, UITextViewDelegate, UITextFieldDelegate>
{
    _Bool _isPreSetCopyrightTag;
    TPKeyboardAvoidingTableView *_tableView;
    UIScrollView *_bgScrollView;
    long long _defaultSetId;
    NSString *_content;
    NSMutableArray *_array;
    NSArray *_feedbackTagsArr;
    IMYFeedbackViewModel *_viewModel;
    IMYFeedbackUnregistHeaderView *_headerView;
    long long _selectedPickerRow;
    IMYFeedbackTagsModel *_selectedTagModel;
    NSString *_defaultStoryContent;
}

+ (id)uploadDBFiles:(id)arg1;
+ (id)gzipFiles:(id)arg1;
+ (void)load;
@property(nonatomic) _Bool isPreSetCopyrightTag; // @synthesize isPreSetCopyrightTag=_isPreSetCopyrightTag;
@property(copy, nonatomic) NSString *defaultStoryContent; // @synthesize defaultStoryContent=_defaultStoryContent;
@property(retain, nonatomic) IMYFeedbackTagsModel *selectedTagModel; // @synthesize selectedTagModel=_selectedTagModel;
@property(nonatomic) long long selectedPickerRow; // @synthesize selectedPickerRow=_selectedPickerRow;
@property(retain, nonatomic) IMYFeedbackUnregistHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IMYFeedbackViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSArray *feedbackTagsArr; // @synthesize feedbackTagsArr=_feedbackTagsArr;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long defaultSetId; // @synthesize defaultSetId=_defaultSetId;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(retain, nonatomic) TPKeyboardAvoidingTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)showWithPhotos:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)checkQQNumberWithRegex:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hidePickerView;
- (void)getFeedbacks:(CDUnknownBlockType)arg1;
- (void)postWithImageNames:(id)arg1 fileURLs:(id)arg2;
- (void)commitButtonPressed:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)findFirstResponderBeneathView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

