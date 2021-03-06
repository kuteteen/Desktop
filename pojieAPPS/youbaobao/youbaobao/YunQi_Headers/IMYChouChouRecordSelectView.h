//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UILabel;
@protocol IMYChouChouRecordSelectViewDelegate;

@interface IMYChouChouRecordSelectView : UIView
{
    _Bool _hasSelectedImage;
    _Bool _isScrollView;
    long long _selectedIndex;
    id <IMYChouChouRecordSelectViewDelegate> _delegate;
    NSArray *_imageArray;
    NSArray *_buttonArray;
    NSArray *_textArray;
    long long _buttonWidth;
    NSArray *_selectedImageArr;
    UIButton *_lastSectedButton;
    UILabel *_lastSectedLabel;
}

+ (id)chouChouRecordSelectViewWithStyle:(_Bool)arg1 imageArray:(id)arg2 selectedImageArray:(id)arg3 textArray:(id)arg4 buttonWidth:(double)arg5;
+ (id)chouChouRecordScrollViewWithStyle:(_Bool)arg1 imageArray:(id)arg2 selectedImageArray:(id)arg3 textArray:(id)arg4 buttonWidth:(double)arg5;
+ (id)chouChouRecordScrollViewImageArray:(id)arg1 textArray:(id)arg2 buttonWidth:(double)arg3;
+ (id)chouChouRecordSelectViewWithImageArray:(id)arg1 selectedImageArray:(id)arg2 textArray:(id)arg3 buttonWidth:(double)arg4;
+ (id)chouChouRecordSelectViewImageArray:(id)arg1 textArray:(id)arg2 buttonWidth:(double)arg3;
@property(nonatomic) _Bool isScrollView; // @synthesize isScrollView=_isScrollView;
@property(nonatomic) __weak UILabel *lastSectedLabel; // @synthesize lastSectedLabel=_lastSectedLabel;
@property(nonatomic) __weak UIButton *lastSectedButton; // @synthesize lastSectedButton=_lastSectedButton;
@property(retain, nonatomic) NSArray *selectedImageArr; // @synthesize selectedImageArr=_selectedImageArr;
@property(nonatomic) _Bool hasSelectedImage; // @synthesize hasSelectedImage=_hasSelectedImage;
@property(nonatomic) long long buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) NSArray *textArray; // @synthesize textArray=_textArray;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) __weak id <IMYChouChouRecordSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)resetUI;
- (void)p_buttonSelected:(id)arg1;
- (id)p_labelWithText:(id)arg1;
- (id)p_buttonWithImage:(id)arg1 selectedImage:(id)arg2 width:(double)arg3;
- (void)p_initUI;

@end

