//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ANGAsyncImageView, NSLayoutConstraint, UILabel, _TtC7Anghami23ANGSegmentedProgressBar;

@interface _TtC7Anghami18ANGStoryHeaderView : UIView
{
    // Error parsing type: , name: view
    // Error parsing type: , name: segmentedProgressBar
    // Error parsing type: , name: storyOwnerProfileImageViewContainer
    // Error parsing type: , name: storyOwnerProfileImageView
    // Error parsing type: , name: storyOwnerNameLabel
    // Error parsing type: , name: chapterTimeLabel
    // Error parsing type: , name: seenByView
    // Error parsing type: , name: seenByLabel
    // Error parsing type: , name: myStoryTimeLabel
    // Error parsing type: , name: storyHeaderViewDelegate
    // Error parsing type: , name: seenByViewProfile1WidthC
    // Error parsing type: , name: seenByViewProfile2WidthC
    // Error parsing type: , name: seenByProfileImageView1
    // Error parsing type: , name: seenByProfileImageView2
    // Error parsing type: , name: seenByProfileContainer1
    // Error parsing type: , name: seenByProfileContainer2
    // Error parsing type: , name: story
    // Error parsing type: , name: chapter
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)seenByViewTapped:(id)arg1;
- (void)userUITapped:(id)arg1;
- (void)awakeFromNib;
- (void)chapterPositionChanged:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIView *seenByProfileContainer2; // @synthesize seenByProfileContainer2;
@property(nonatomic) __weak UIView *seenByProfileContainer1; // @synthesize seenByProfileContainer1;
@property(nonatomic) __weak ANGAsyncImageView *seenByProfileImageView2; // @synthesize seenByProfileImageView2;
@property(nonatomic) __weak ANGAsyncImageView *seenByProfileImageView1; // @synthesize seenByProfileImageView1;
@property(nonatomic) __weak NSLayoutConstraint *seenByViewProfile2WidthC; // @synthesize seenByViewProfile2WidthC;
@property(nonatomic) __weak NSLayoutConstraint *seenByViewProfile1WidthC; // @synthesize seenByViewProfile1WidthC;
@property(nonatomic) __weak UILabel *myStoryTimeLabel; // @synthesize myStoryTimeLabel;
@property(nonatomic) __weak UILabel *seenByLabel; // @synthesize seenByLabel;
@property(nonatomic) __weak UIView *seenByView; // @synthesize seenByView;
@property(nonatomic) __weak UILabel *chapterTimeLabel; // @synthesize chapterTimeLabel;
@property(nonatomic) __weak UILabel *storyOwnerNameLabel; // @synthesize storyOwnerNameLabel;
@property(nonatomic) __weak ANGAsyncImageView *storyOwnerProfileImageView; // @synthesize storyOwnerProfileImageView;
@property(nonatomic) __weak UIView *storyOwnerProfileImageViewContainer; // @synthesize storyOwnerProfileImageViewContainer;
@property(nonatomic) __weak _TtC7Anghami23ANGSegmentedProgressBar *segmentedProgressBar; // @synthesize segmentedProgressBar;
@property(nonatomic) __weak UIView *view; // @synthesize view;

@end

