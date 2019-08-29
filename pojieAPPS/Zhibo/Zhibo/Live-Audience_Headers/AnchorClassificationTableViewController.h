//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FenLieHeaderView, NSMutableArray, NSString, UIButton, UITableView;
@protocol AnchorClassificationTableViewControllerDelegate;

@interface AnchorClassificationTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_viewArray;
    NSMutableArray *_buttonArray;
    long long _selectIndex;
    NSString *_province;
    long long _cellRow;
    struct AnchorType oldAnchorType;
    id <AnchorClassificationTableViewControllerDelegate> _delegae;
    UITableView *_tableView;
    FenLieHeaderView *_headerView;
    NSMutableArray *_dataArray;
    UIButton *_sendBtn;
    struct AnchorType _anchorType;
}

@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) FenLieHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <AnchorClassificationTableViewControllerDelegate> delegae; // @synthesize delegae=_delegae;
@property(nonatomic) struct AnchorType anchorType; // @synthesize anchorType=_anchorType;
- (void).cxx_destruct;
- (void)clickSendBtn;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)buttonClick:(id)arg1;
- (void)changButton;
- (void)refreshListData:(id)arg1;
- (void)getcellIndexPathRow;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithAnchorType:(struct AnchorType)arg1 province:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
