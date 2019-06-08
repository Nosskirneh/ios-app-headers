//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, RHWhatsNewViewModel, UIButton, UIImageView, UILabel, UIPageControl, UIScrollView, UIView;
@protocol RHBrandedImageProvider;

@interface RHWhatsNewViewController : RHViewController <UIScrollViewDelegate>
{
    UILabel *_titleOutlet;
    UIScrollView *_horizontalPagingScrollView;
    UIView *_scrollViewContent;
    UIButton *_nextButton;
    UIButton *_skipButton;
    UIButton *_doneButton;
    UIPageControl *_pageControl;
    UIView *_entireArea;
    UIView *_scrollContainer;
    UIView *_headerBackgroundImage;
    RHWhatsNewViewModel *_viewModel;
    id <RHBrandedImageProvider> _brandedImageProvider;
    NSLayoutConstraint *_screen1Width;
    UIView *_screen1;
    UIView *_screen2;
    UIView *_screen3;
    UIImageView *_screen1_image;
    UILabel *_screen1_heading;
    UILabel *_screen1_subtitle;
    UIImageView *_screen2_image;
    UILabel *_screen2_heading;
    UILabel *_screen2_subtitle;
    UIImageView *_screen3_image;
    UILabel *_screen3_heading;
    UILabel *_screen3_subtitle;
    UIImageView *_screen1BackgroundImage;
    UIImageView *_screen2BackgroundImage;
    UIImageView *_screen3BackgroundImage;
}

+ (id)titleFont;
+ (id)bodyBoldFont;
+ (id)bodyFont;
+ (double)fontRelativeSize;
+ (double)interpolateFunctionAtX:(double)arg1 minLimit:(double)arg2 minValue:(double)arg3 maxLimit:(double)arg4 maxValue:(double)arg5;
@property(nonatomic) __weak UIImageView *screen3BackgroundImage; // @synthesize screen3BackgroundImage=_screen3BackgroundImage;
@property(nonatomic) __weak UIImageView *screen2BackgroundImage; // @synthesize screen2BackgroundImage=_screen2BackgroundImage;
@property(nonatomic) __weak UIImageView *screen1BackgroundImage; // @synthesize screen1BackgroundImage=_screen1BackgroundImage;
@property(nonatomic) __weak UILabel *screen3_subtitle; // @synthesize screen3_subtitle=_screen3_subtitle;
@property(nonatomic) __weak UILabel *screen3_heading; // @synthesize screen3_heading=_screen3_heading;
@property(nonatomic) __weak UIImageView *screen3_image; // @synthesize screen3_image=_screen3_image;
@property(nonatomic) __weak UILabel *screen2_subtitle; // @synthesize screen2_subtitle=_screen2_subtitle;
@property(nonatomic) __weak UILabel *screen2_heading; // @synthesize screen2_heading=_screen2_heading;
@property(nonatomic) __weak UIImageView *screen2_image; // @synthesize screen2_image=_screen2_image;
@property(nonatomic) __weak UILabel *screen1_subtitle; // @synthesize screen1_subtitle=_screen1_subtitle;
@property(nonatomic) __weak UILabel *screen1_heading; // @synthesize screen1_heading=_screen1_heading;
@property(nonatomic) __weak UIImageView *screen1_image; // @synthesize screen1_image=_screen1_image;
@property(nonatomic) __weak UIView *screen3; // @synthesize screen3=_screen3;
@property(nonatomic) __weak UIView *screen2; // @synthesize screen2=_screen2;
@property(nonatomic) __weak UIView *screen1; // @synthesize screen1=_screen1;
@property(retain, nonatomic) NSLayoutConstraint *screen1Width; // @synthesize screen1Width=_screen1Width;
@property(retain, nonatomic) id <RHBrandedImageProvider> brandedImageProvider; // @synthesize brandedImageProvider=_brandedImageProvider;
@property(retain, nonatomic) RHWhatsNewViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak UIView *headerBackgroundImage; // @synthesize headerBackgroundImage=_headerBackgroundImage;
@property(nonatomic) __weak UIView *scrollContainer; // @synthesize scrollContainer=_scrollContainer;
@property(nonatomic) __weak UIView *entireArea; // @synthesize entireArea=_entireArea;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIView *scrollViewContent; // @synthesize scrollViewContent=_scrollViewContent;
@property(retain, nonatomic) UIScrollView *horizontalPagingScrollView; // @synthesize horizontalPagingScrollView=_horizontalPagingScrollView;
@property(nonatomic) __weak UILabel *titleOutlet; // @synthesize titleOutlet=_titleOutlet;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tapDone:(id)arg1;
- (void)tapSkip:(id)arg1;
- (void)tapNext:(id)arg1;
- (void)viewDidLoad;
- (void)setupScreenContents;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

