//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MGSwipeAnimation;

@interface MGSwipeSettings : NSObject
{
    _Bool _keepButtonsSwiped;
    _Bool _onlySwipeButtons;
    _Bool _enableSwipeBounces;
    long long _transition;
    double _threshold;
    double _offset;
    double _topMargin;
    double _bottomMargin;
    double _buttonsDistance;
    MGSwipeAnimation *_showAnimation;
    MGSwipeAnimation *_hideAnimation;
    MGSwipeAnimation *_stretchAnimation;
    double _swipeBounceRate;
}

@property(nonatomic) double swipeBounceRate; // @synthesize swipeBounceRate=_swipeBounceRate;
@property(nonatomic) _Bool enableSwipeBounces; // @synthesize enableSwipeBounces=_enableSwipeBounces;
@property(nonatomic) _Bool onlySwipeButtons; // @synthesize onlySwipeButtons=_onlySwipeButtons;
@property(nonatomic) _Bool keepButtonsSwiped; // @synthesize keepButtonsSwiped=_keepButtonsSwiped;
@property(retain, nonatomic) MGSwipeAnimation *stretchAnimation; // @synthesize stretchAnimation=_stretchAnimation;
@property(retain, nonatomic) MGSwipeAnimation *hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(retain, nonatomic) MGSwipeAnimation *showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) double buttonsDistance; // @synthesize buttonsDistance=_buttonsDistance;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) long long transition; // @synthesize transition=_transition;
- (void).cxx_destruct;
@property(nonatomic) double animationDuration;
- (id)init;

@end

