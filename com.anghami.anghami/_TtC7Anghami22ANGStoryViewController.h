//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class LOTAnimationView, NSArray, NSLayoutConstraint, UIButton, UIView, _TtC7Anghami18ANGStoryHeaderView, _TtC7Anghami19ANGStoryChapterView;

@interface _TtC7Anghami22ANGStoryViewController : UIViewController
{
    // Error parsing type: , name: chapterView
    // Error parsing type: , name: chapterContextButton
    // Error parsing type: , name: storyHeaderView
    // Error parsing type: , name: backgroundGradientView
    // Error parsing type: , name: lottieLoadingView
    // Error parsing type: , name: storyHeaderViewTopC
    // Error parsing type: , name: contextSheetViewController
    // Error parsing type: , name: chapterComponents
    // Error parsing type: , name: storiesPagerDelegate
    // Error parsing type: , name: storyID
    // Error parsing type: , name: _story
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)storyContentUpdated:(id)arg1;
- (void)indexOfChapterUpdatedWithChapterIndex:(unsigned long long)arg1;
- (void)engineStoriesPlayQueueIndexChanged;
- (void)myStoryChapterWasDeleted;
- (void)currentlyVisibleChapterIndexChanged;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *chapterComponents; // @synthesize chapterComponents;
@property(nonatomic) __weak NSLayoutConstraint *storyHeaderViewTopC; // @synthesize storyHeaderViewTopC;
@property(nonatomic) __weak LOTAnimationView *lottieLoadingView; // @synthesize lottieLoadingView;
@property(nonatomic) __weak UIView *backgroundGradientView; // @synthesize backgroundGradientView;
@property(nonatomic) __weak _TtC7Anghami18ANGStoryHeaderView *storyHeaderView; // @synthesize storyHeaderView;
@property(nonatomic) __weak UIButton *chapterContextButton; // @synthesize chapterContextButton;
@property(nonatomic) __weak _TtC7Anghami19ANGStoryChapterView *chapterView; // @synthesize chapterView;

@end
