//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGLoginGeneralViewController.h"

@class ANGLoginLabel, ANGLoginTitleLabel, UIButton;

@interface ANGLoginHelpViewController : ANGLoginGeneralViewController
{
    ANGLoginTitleLabel *_titleLabel;
    ANGLoginLabel *_subTitleLabel;
    UIButton *_helpButton;
}

@property(nonatomic) __weak UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak ANGLoginLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak ANGLoginTitleLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)closeButton:(id)arg1;
- (void)helpButtonClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)viewDidLoad;

@end
