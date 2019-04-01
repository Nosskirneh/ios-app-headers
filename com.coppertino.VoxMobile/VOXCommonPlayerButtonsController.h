//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXPlayerButtonsController.h"

@class VOXRepeatModeButton, VOXShuffleModeButton;

@interface VOXCommonPlayerButtonsController : VOXPlayerButtonsController
{
    VOXRepeatModeButton *_repeatModeButton;
    VOXShuffleModeButton *_shuffleButton;
}

@property(nonatomic) __weak VOXShuffleModeButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(nonatomic) __weak VOXRepeatModeButton *repeatModeButton; // @synthesize repeatModeButton=_repeatModeButton;
- (void).cxx_destruct;
- (void)updateShuffleModeButtonState;
- (void)updateRepeatModeButtonState;
- (void)shuffleButtonHit:(id)arg1;
- (void)repeatModeButtonHit:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end

