//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

@interface WAH5ViewControllerParameter : NSObject
{
    _Bool _disableShareMenu;
    _Bool _presentModal;
    NSURL *_url;
    NSNumber *_isForceFullScreen;
}

@property(retain, nonatomic) NSNumber *isForceFullScreen; // @synthesize isForceFullScreen=_isForceFullScreen;
@property(nonatomic) _Bool presentModal; // @synthesize presentModal=_presentModal;
@property(nonatomic) _Bool disableShareMenu; // @synthesize disableShareMenu=_disableShareMenu;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end
