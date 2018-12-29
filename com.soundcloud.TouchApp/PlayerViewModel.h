//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIButton, UILabel;

@interface PlayerViewModel : NSObject
{
    UIButton *_centerButton;
    UIButton *_nextButton;
    UIButton *_previousButton;
    UILabel *_centerTitleLabel;
    UILabel *_centerSubtitleLabel;
    NSLayoutConstraint *_errorSubtitleHeightSpaceConstraint;
    NSLayoutConstraint *_errorSubtitleBottomSpaceConstraint;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak NSLayoutConstraint *errorSubtitleBottomSpaceConstraint; // @synthesize errorSubtitleBottomSpaceConstraint=_errorSubtitleBottomSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *errorSubtitleHeightSpaceConstraint; // @synthesize errorSubtitleHeightSpaceConstraint=_errorSubtitleHeightSpaceConstraint;
@property(nonatomic) __weak UILabel *centerSubtitleLabel; // @synthesize centerSubtitleLabel=_centerSubtitleLabel;
@property(nonatomic) __weak UILabel *centerTitleLabel; // @synthesize centerTitleLabel=_centerTitleLabel;
@property(nonatomic) __weak UIButton *previousButton; // @synthesize previousButton=_previousButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak UIButton *centerButton; // @synthesize centerButton=_centerButton;
- (void).cxx_destruct;
- (id)viewModelDescription;
- (id)description;
- (_Bool)isInPausedState;

@end
