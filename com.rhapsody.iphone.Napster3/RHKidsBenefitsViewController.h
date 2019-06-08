//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class RHAppModel, RHButton, UIButton, UILabel, UIView;

@interface RHKidsBenefitsViewController : RHViewController
{
    UIView *_placeholderView;
    UIView *_containerView;
    UIView *_spacerView;
    UIView *_cancelButtonSpacerView;
    UIButton *_cancelButton;
    RHButton *_okButton;
    UILabel *_titleLabel;
    UILabel *_detailsLabel;
    CDUnknownBlockType _completionBlock;
    RHAppModel *_appModel;
}

@property(retain, nonatomic) RHAppModel *appModel; // @synthesize appModel=_appModel;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak RHButton *okButton; // @synthesize okButton=_okButton;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIView *cancelButtonSpacerView; // @synthesize cancelButtonSpacerView=_cancelButtonSpacerView;
@property(nonatomic) __weak UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (id)createContentView;
- (id)metricsScreenName;
- (void)executeNegativeAction:(id)arg1;
- (void)executePositiveAction:(id)arg1;
- (void)setupFontsForIPhone4;
- (void)setupFonts;
- (void)setupLabels;
- (void)setupButtons;
- (void)setupViews;
- (void)viewDidLoad;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

