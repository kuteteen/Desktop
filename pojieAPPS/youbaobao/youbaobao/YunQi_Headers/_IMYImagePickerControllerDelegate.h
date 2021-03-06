//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImagePickerController, UIViewController;

@interface _IMYImagePickerControllerDelegate : NSObject
{
    UIViewController *_sourceViewController;
    UIImagePickerController *_imagePickerController;
    long long _statusBarStyle;
    CDUnknownBlockType _complatedBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType complatedBlock; // @synthesize complatedBlock=_complatedBlock;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) __weak UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;

@end

