//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GT3MotionModel : NSObject
{
    struct {
        int roll;
        int pitch;
        int yaw;
    } _attitude;
    CDStruct_f718959f _rotationRate;
    CDStruct_f718959f _acceleration;
    CDStruct_45500882 _quaternion;
    CDStruct_31142d93 _magneticField;
}

@property(readonly, nonatomic) CDStruct_31142d93 magneticField; // @synthesize magneticField=_magneticField;
@property(readonly, nonatomic) CDStruct_77932685 acceleration; // @synthesize acceleration=_acceleration;
@property(readonly, nonatomic) CDStruct_77932685 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly, nonatomic) CDStruct_45500882 quaternion; // @synthesize quaternion=_quaternion;
@property(readonly, nonatomic) CDStruct_77932685 attitude; // @synthesize attitude=_attitude;
- (id)description;
- (id)dictionary;
- (_Bool)contrastAttitudeModel:(id)arg1;
- (int)convertDoubleToInt:(double)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *captchaMotionData;
- (id)initWithMotionData:(id)arg1;
- (id)initWithLastModel:(id)arg1 andCurrentModel:(id)arg2;

@end

