//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class DZFlatButton, UIImageView, UILabel;

@interface DZRNoConnectionView : UIControl
{
    UIImageView *_noDataImageView;
    UILabel *_noDataTitleLabel;
    UILabel *_noDataSubtitleLabel;
    DZFlatButton *_noDataRefreshButton;
}

+ (id)view;
@property(retain, nonatomic) DZFlatButton *noDataRefreshButton; // @synthesize noDataRefreshButton=_noDataRefreshButton;
@property(retain, nonatomic) UILabel *noDataSubtitleLabel; // @synthesize noDataSubtitleLabel=_noDataSubtitleLabel;
@property(retain, nonatomic) UILabel *noDataTitleLabel; // @synthesize noDataTitleLabel=_noDataTitleLabel;
@property(retain, nonatomic) UIImageView *noDataImageView; // @synthesize noDataImageView=_noDataImageView;
- (void).cxx_destruct;
- (void)refreshButtontapped:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)presentError:(id)arg1;

@end

