//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NIMCommonTableDelegate, NSArray, UITableView;

@interface NTESGenderSettingViewController : UIViewController
{
    UITableView *_tableView;
    NIMCommonTableDelegate *_delegator;
    NSArray *_data;
    long long _selectedGender;
}

@property(nonatomic) long long selectedGender; // @synthesize selectedGender=_selectedGender;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) NIMCommonTableDelegate *delegator; // @synthesize delegator=_delegator;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)remoteUpdateGender;
- (void)onTouchUnkownGenderCell:(id)arg1;
- (void)onTouchFemaleCell:(id)arg1;
- (void)onTouchMaleCell:(id)arg1;
- (void)refresh;
- (void)buildData;
- (void)setUpNav;
- (void)viewDidLoad;

@end

