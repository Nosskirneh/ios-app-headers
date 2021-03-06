//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGQuestionGeneralTableViewCell.h"

@class ANGGradientView, NSLayoutConstraint, UIButton, UILabel;

@interface ANGQuestionComponentTableViewCell : ANGQuestionGeneralTableViewCell
{
    ANGGradientView *_containerGradientView;
    UILabel *_questionTitleLabel;
    UIButton *_questionButton;
    NSLayoutConstraint *_questionButtonWidthLC;
}

@property(nonatomic) __weak NSLayoutConstraint *questionButtonWidthLC; // @synthesize questionButtonWidthLC=_questionButtonWidthLC;
@property(nonatomic) __weak UIButton *questionButton; // @synthesize questionButton=_questionButton;
@property(nonatomic) __weak UILabel *questionTitleLabel; // @synthesize questionTitleLabel=_questionTitleLabel;
@property(nonatomic) __weak ANGGradientView *containerGradientView; // @synthesize containerGradientView=_containerGradientView;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)arg1;
- (void)layoutSubviews;
- (void)questionButtonClicked:(id)arg1;
- (void)initButton;
- (void)setTitleLabelText:(id)arg1;
- (void)initTitleLabel;
- (void)setupBackgroundColor;
- (void)initContainerView;
- (double)heightForQuestion:(id)arg1;
- (void)refreshContainerHeight;
- (void)loadView;
- (void)initWithQuestion:(id)arg1;

@end

