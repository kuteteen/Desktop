//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YoutuFaceDetectInternal : NSObject
{
    struct YtFaceDetParam detectionParam;
    struct YTFaceDetection *_faceDetector;
    int _accuracy;
}

+ (int)GlobalRelease;
+ (int)GlobalInitWithPath:(id)arg1;
@property(nonatomic) int accuracy; // @synthesize accuracy=_accuracy;
- (id).cxx_construct;
- (_Bool)detectStillImage:(id)arg1 result:(struct vector<cv::Rect_<int>, std::__1::allocator<cv::Rect_<int>>> *)arg2;
- (_Bool)detectVideoImage:(id)arg1 result:(struct vector<cv::Rect_<int>, std::__1::allocator<cv::Rect_<int>>> *)arg2;
- (void)clearDetectorResource;
- (void)dealloc;
- (id)init;

@end
