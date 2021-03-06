//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "IMYToolsPhotoBrowserProtocol-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IMYButton, IMYCaptionView, NSString, UITableView, UIView, YBBToolsChildbirthBagInfoCellPhoto, YBBToolsChildbirthBagInfoVM;

@interface YBBToolsChildbirthBagInfoVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, IMYToolsPhotoBrowserProtocol, UITextFieldDelegate>
{
    _Bool _isTTQShow;
    YBBToolsChildbirthBagInfoVM *_vm;
    UITableView *_mainTableView;
    UIView *_footerView;
    IMYButton *_gotoshowButton;
    IMYCaptionView *_captionView;
    YBBToolsChildbirthBagInfoCellPhoto *_photoCell;
}

@property(nonatomic) _Bool isTTQShow; // @synthesize isTTQShow=_isTTQShow;
@property(retain, nonatomic) YBBToolsChildbirthBagInfoCellPhoto *photoCell; // @synthesize photoCell=_photoCell;
@property(nonatomic) __weak IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak IMYButton *gotoshowButton; // @synthesize gotoshowButton=_gotoshowButton;
@property(nonatomic) __weak UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) YBBToolsChildbirthBagInfoVM *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)showTopicSuccess;
- (id)photoBrowser:(id)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (void)browser:(id)arg1 didDeleteAtIndex:(long long)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (void)takePhotoFromCamera;
- (void)takePhotoFromAlbum;
- (void)gotoshowButtonAction:(id)arg1;
- (void)initFooterView;
- (_Bool)checkPrice:(id)arg1 replacementString:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)imy_topLeftButtonTouchupInside;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initViewControllerWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

