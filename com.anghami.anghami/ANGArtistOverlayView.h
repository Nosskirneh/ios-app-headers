//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ANGAsyncImageView, NSLayoutConstraint, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol ANGArtistOverlayTapDelegate;

@interface ANGArtistOverlayView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _didFirstLayout;
    _Bool _removeImageOnSmallScreens;
    _Bool _hideTitleLabel;
    id <ANGArtistOverlayTapDelegate> _tapDelegate;
    ANGAsyncImageView *_imageView;
    UILabel *_byLabel;
    UILabel *_titleLabel;
    UILabel *_aboveTitleLabel;
    UIImageView *_caret;
    NSLayoutConstraint *_titleLabelCenterY;
    UITapGestureRecognizer *_tap;
    NSLayoutConstraint *_byLabelTop;
    NSLayoutConstraint *_byLabelBottom;
    NSLayoutConstraint *_byLabelCenterY;
    NSLayoutConstraint *_imageWidth;
    double _originalImageWidth;
}

@property(nonatomic) double originalImageWidth; // @synthesize originalImageWidth=_originalImageWidth;
@property(retain, nonatomic) NSLayoutConstraint *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSLayoutConstraint *byLabelCenterY; // @synthesize byLabelCenterY=_byLabelCenterY;
@property(retain, nonatomic) NSLayoutConstraint *byLabelBottom; // @synthesize byLabelBottom=_byLabelBottom;
@property(retain, nonatomic) NSLayoutConstraint *byLabelTop; // @synthesize byLabelTop=_byLabelTop;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelCenterY; // @synthesize titleLabelCenterY=_titleLabelCenterY;
@property(nonatomic) _Bool hideTitleLabel; // @synthesize hideTitleLabel=_hideTitleLabel;
@property(nonatomic) _Bool removeImageOnSmallScreens; // @synthesize removeImageOnSmallScreens=_removeImageOnSmallScreens;
@property(retain, nonatomic) UIImageView *caret; // @synthesize caret=_caret;
@property(retain, nonatomic) UILabel *aboveTitleLabel; // @synthesize aboveTitleLabel=_aboveTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *byLabel; // @synthesize byLabel=_byLabel;
@property(retain, nonatomic) ANGAsyncImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <ANGArtistOverlayTapDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didPressArtistOverlay:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)refreshRemoveImage;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

