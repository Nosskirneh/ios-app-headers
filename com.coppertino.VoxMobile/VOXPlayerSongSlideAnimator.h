//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UILabel, UIView;

@interface VOXPlayerSongSlideAnimator : NSObject
{
    _Bool _backwards;
    UILabel *_trackArtistLabel;
    UILabel *_trackNameLabel;
    UIView *_authorSnapShot;
    UIView *_songSnapShot;
}

@property(nonatomic) __weak UIView *songSnapShot; // @synthesize songSnapShot=_songSnapShot;
@property(nonatomic) __weak UIView *authorSnapShot; // @synthesize authorSnapShot=_authorSnapShot;
@property(nonatomic) __weak UILabel *trackNameLabel; // @synthesize trackNameLabel=_trackNameLabel;
@property(nonatomic) __weak UILabel *trackArtistLabel; // @synthesize trackArtistLabel=_trackArtistLabel;
@property(nonatomic, getter=isBackwards) _Bool backwards; // @synthesize backwards=_backwards;
- (void).cxx_destruct;
- (id)layerTranslationAnimationWithValue:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CATransform3D)rightOffscreenTranslation;
- (struct CATransform3D)leftOffscreenTranslation;
- (void)performAnimation;
- (void)prepareForAnimation;

@end

