//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class NSArray, NSLayoutConstraint, RHDataController, RHGenreMO, RHSegmentedEditorialsViewControllerSegment, UILabel, UIView, _TtC7Napster18RHSegmentedControl;

@interface RHSegmentedEditorialsViewController : RHViewController
{
    _Bool _showsFilter;
    RHSegmentedEditorialsViewControllerSegment *_selectedSegment;
    RHGenreMO *_genreForPostsSegment;
    RHDataController *_dataController;
    NSArray *_segments;
    UIView *_headerView;
    UILabel *_titleLabel;
    _TtC7Napster18RHSegmentedControl *_segmentedControl;
    UIView *_contentView;
    UIView *_outletBar;
    NSLayoutConstraint *_topBarHeight;
    RHSegmentedEditorialsViewControllerSegment *_previousSegment;
}

@property(retain) RHSegmentedEditorialsViewControllerSegment *previousSegment; // @synthesize previousSegment=_previousSegment;
@property(nonatomic) __weak NSLayoutConstraint *topBarHeight; // @synthesize topBarHeight=_topBarHeight;
@property(nonatomic) _Bool showsFilter; // @synthesize showsFilter=_showsFilter;
@property(nonatomic) __weak UIView *outletBar; // @synthesize outletBar=_outletBar;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak _TtC7Napster18RHSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) RHGenreMO *genreForPostsSegment; // @synthesize genreForPostsSegment=_genreForPostsSegment;
@property(retain, nonatomic) RHSegmentedEditorialsViewControllerSegment *selectedSegment; // @synthesize selectedSegment=_selectedSegment;
- (void).cxx_destruct;
- (id)createSegments;
- (void)adjustSegmentWidthsAndTitleSizes;
- (id)segmentForEditorialType:(unsigned long long)arg1;
- (id)viewControllerForSegment:(unsigned long long)arg1;
- (void)configureContent;
- (id)metricsProperties;
- (id)metricsScreenEvent;
- (void)segmentedControlTapped:(id)arg1;
- (void)selectSegmentForEditorialType:(unsigned long long)arg1;
- (void)scrollToTop;
- (void)viewWillLayoutSubviews;
- (void)viewUnloading;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 selectedEditorialType:(unsigned long long)arg2 showsFilter:(_Bool)arg3 metricsSource:(id)arg4;
- (id)initWithDataController:(id)arg1 selectedEditorialType:(unsigned long long)arg2 metricsSource:(id)arg3;

@end

