//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UILabel, YTMCompoundThumbnailView, YTMTransferButton;

@interface YTMOfflineMixtapeRemixContentView : UIView
{
    UILabel *_offlineMixtapeLabel;
    CAGradientLayer *_transferButtonScrim;
    YTMCompoundThumbnailView *_thumbnailView;
    UILabel *_titleLabel;
    UILabel *_bylineLabel;
    YTMTransferButton *_transferButton;
}

@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
@property(retain, nonatomic) UILabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTMCompoundThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (struct CGRect)thumbnailFrame;
- (void)setTransferButtonHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

