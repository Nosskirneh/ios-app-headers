//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Napster14ViewController.h"

@class NSDictionary, NSLayoutConstraint, NSString, UIView, _TtC7Napster18RHSegmentedControl;

@interface _TtC7Napster21MyMusicViewController : _TtC7Napster14ViewController
{
    // Error parsing type: , name: headerBackgroundView
    // Error parsing type: , name: headerBackgroundHeight
    // Error parsing type: , name: contentContainer
    // Error parsing type: , name: segmentedControl
    // Error parsing type: , name: segmentViewControllers
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: libraryViewController
    // Error parsing type: , name: downloadsViewController
    // Error parsing type: , name: disposeBag
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 metricsSource:(id)arg3;
@property(nonatomic, readonly) NSDictionary *metricsProperties;
@property(nonatomic, readonly) NSString *metricsScreenEvent;
- (void)showLibrary;
- (void)scrollToTopAnimated:(_Bool)arg1;
@property(nonatomic, readonly) _Bool showTitleWhenTransparent;
@property(nonatomic, readonly) double navigationAlpha;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithDependencies:(id)arg1;
@property(nonatomic) __weak _TtC7Napster18RHSegmentedControl *segmentedControl; // @synthesize segmentedControl;
@property(nonatomic, retain) UIView *contentContainer; // @synthesize contentContainer;
@property(nonatomic) __weak NSLayoutConstraint *headerBackgroundHeight; // @synthesize headerBackgroundHeight;
@property(nonatomic) __weak UIView *headerBackgroundView; // @synthesize headerBackgroundView;

@end

