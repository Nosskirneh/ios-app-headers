//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface _TtC4WiMP22NowPlayingHeaderModule : UIViewController
{
    // Error parsing type: , name: didTapClose
    // Error parsing type: , name: didTapContextMenu
    // Error parsing type: , name: didTapInfoButton
    // Error parsing type: , name: didTapSourceTitleLabel
    // Error parsing type: , name: sourceTitleLabel
    // Error parsing type: , name: suggestedItemsTitleLabel
    // Error parsing type: , name: queueTitleLabel
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: contextMenuButton
    // Error parsing type: , name: indicatorView
    // Error parsing type: , name: indicatorContainerView
    // Error parsing type: , name: indicatorLeadingConstraint
    // Error parsing type: , name: titleCenterXConstraint
    // Error parsing type: , name: suggestedItemsCenterXConstraint
    // Error parsing type: , name: queueCenterXConstraint
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapSourcetitleLabel:(id)arg1;
- (void)didTapContextMenuButtonWithSender:(id)arg1;
- (void)didTapCloseButtonWithSender:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *queueCenterXConstraint; // @synthesize queueCenterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *suggestedItemsCenterXConstraint; // @synthesize suggestedItemsCenterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleCenterXConstraint; // @synthesize titleCenterXConstraint;
@property(nonatomic) __weak NSLayoutConstraint *indicatorLeadingConstraint; // @synthesize indicatorLeadingConstraint;
@property(nonatomic) __weak UIView *indicatorContainerView; // @synthesize indicatorContainerView;
@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView;
@property(nonatomic) __weak UIButton *contextMenuButton; // @synthesize contextMenuButton;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak UILabel *queueTitleLabel; // @synthesize queueTitleLabel;
@property(nonatomic) __weak UILabel *suggestedItemsTitleLabel; // @synthesize suggestedItemsTitleLabel;
@property(nonatomic) __weak UILabel *sourceTitleLabel; // @synthesize sourceTitleLabel;

@end

