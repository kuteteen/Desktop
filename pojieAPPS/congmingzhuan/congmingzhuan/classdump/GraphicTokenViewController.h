//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FMInputField, FaceApiManager, NSString, UIButton;

@interface GraphicTokenViewController : UIViewController
{
    NSString *_idNo;
    NSString *_name;
    FMInputField *_nameInputField;
    FMInputField *_idNoInputField;
    FMInputField *_graphicTokenInputField;
    UIButton *_submitButton;
    FaceApiManager *_faceApi;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) FaceApiManager *faceApi; // @synthesize faceApi=_faceApi;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) FMInputField *graphicTokenInputField; // @synthesize graphicTokenInputField=_graphicTokenInputField;
@property(retain, nonatomic) FMInputField *idNoInputField; // @synthesize idNoInputField=_idNoInputField;
@property(retain, nonatomic) FMInputField *nameInputField; // @synthesize nameInputField=_nameInputField;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *idNo; // @synthesize idNo=_idNo;
- (void).cxx_destruct;
- (void)submitButtonDidClick:(id)arg1;
- (void)closeButtonDidClick:(id)arg1;
- (void)viewDidLoad;

@end

