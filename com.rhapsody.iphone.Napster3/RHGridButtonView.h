//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class RHTagViewModel, UIImage;

@interface RHGridButtonView : UIButton
{
    RHTagViewModel *_viewModel;
    UIImage *_image;
    CDUnknownBlockType _onClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onClickBlock; // @synthesize onClickBlock=_onClickBlock;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) RHTagViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)setText:(id)arg1;
- (void)setStyle;
- (void)setupButton;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

