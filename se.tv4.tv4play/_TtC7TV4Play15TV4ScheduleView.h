//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSDate, NSDictionary;

@interface _TtC7TV4Play15TV4ScheduleView : UIScrollView
{
    // Error parsing type: , name: scheduleStartDate
    // Error parsing type: , name: lastTouchedAt
    // Error parsing type: , name: currentTimeOffset
    // Error parsing type: , name: assets
    // Error parsing type: , name: scheduleDelegate
    // Error parsing type: , name: channelSchedules
    // Error parsing type: , name: loading
    // Error parsing type: , name: entriesView.storage
    // Error parsing type: , name: channelsHeaderView.storage
    // Error parsing type: , name: timeHeaderView.storage
    // Error parsing type: , name: timelineOverlayView.storage
    // Error parsing type: , name: spinner.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)selectChannel:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onChannelSelected:(long long)arg1;
@property(nonatomic) _Bool loading; // @synthesize loading;
@property(nonatomic, copy) NSDictionary *channelSchedules; // @synthesize channelSchedules;
@property(nonatomic, copy) NSArray *assets; // @synthesize assets;
@property(nonatomic, copy) NSDate *scheduleStartDate; // @synthesize scheduleStartDate;

@end

