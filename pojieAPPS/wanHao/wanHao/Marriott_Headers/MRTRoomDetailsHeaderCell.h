//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTProduct, UILabel;

@interface MRTRoomDetailsHeaderCell : UITableViewCell
{
    UILabel *_propertyNameLabel;
    UILabel *_roomDetailsLabel;
    UILabel *_roomDescriptionLabel;
    MRTProduct *_room;
}

@property(retain, nonatomic) MRTProduct *room; // @synthesize room=_room;
@property(nonatomic) __weak UILabel *roomDescriptionLabel; // @synthesize roomDescriptionLabel=_roomDescriptionLabel;
@property(nonatomic) __weak UILabel *roomDetailsLabel; // @synthesize roomDetailsLabel=_roomDetailsLabel;
@property(nonatomic) __weak UILabel *propertyNameLabel; // @synthesize propertyNameLabel=_propertyNameLabel;
- (void).cxx_destruct;

@end
