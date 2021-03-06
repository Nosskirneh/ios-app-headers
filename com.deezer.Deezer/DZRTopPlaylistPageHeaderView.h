//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DZRContentPageHeaderViewProtocol-Protocol.h"

@class NSNumber, NSString, UILabel;
@protocol MAKVOObservation;

@interface DZRTopPlaylistPageHeaderView : UIView <DZRContentPageHeaderViewProtocol>
{
    UILabel *_title;
    UILabel *_topDescription;
    UILabel *_notification;
    UIView *_unseenIndicator;
    id <MAKVOObservation> _tracksObservation;
    NSNumber *_unseenCount;
}

@property(retain, nonatomic) NSNumber *unseenCount; // @synthesize unseenCount=_unseenCount;
@property(retain, nonatomic) id <MAKVOObservation> tracksObservation; // @synthesize tracksObservation=_tracksObservation;
@property(retain, nonatomic) UIView *unseenIndicator; // @synthesize unseenIndicator=_unseenIndicator;
@property(retain, nonatomic) UILabel *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) UILabel *topDescription; // @synthesize topDescription=_topDescription;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)populateWithItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

