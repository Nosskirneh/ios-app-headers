//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APPlayer;
@protocol AllPlayGroupViewPlayerModelDelegate;

@interface AllPlayGroupViewPlayerModel : NSObject
{
    _Bool _playerSelected;
    float _targetSliderVolume;
    APPlayer *_player;
    id <AllPlayGroupViewPlayerModelDelegate> _delegate;
}

@property(nonatomic) float targetSliderVolume; // @synthesize targetSliderVolume=_targetSliderVolume;
@property(nonatomic) id <AllPlayGroupViewPlayerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPlayerSelected) _Bool playerSelected; // @synthesize playerSelected=_playerSelected;
@property(retain, nonatomic) APPlayer *player; // @synthesize player=_player;
- (float)sliderVolumeFromPlayerVolume:(int)arg1;
- (int)playerVolumeFromSliderVolume:(float)arg1;
- (_Bool)toggleSelected;
- (void)commitVolumeChange;
- (int)getVolumeIntTarget;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

